class Solution {
public:
int minSubarray(vector<int>& nums, int p) {
    int n = nums.size();    
    // Step 1: Calculate the total sum % p safely to prevent overflow
    long long total_sum = 0;
    for (int num : nums) {
        total_sum += num;
    }    
    int rem = total_sum % p;
    if (rem == 0) return 0; // Already divisible    
    // Step 2: Use a hash map to store (prefix_sum % p) -> latest_index
    unordered_map<int, int> mp;
    mp[0] = -1; // Base case: a prefix sum of 0 occurs before index 0    
    int current_sum = 0;
    int min_len = n; // Initialize with maximum possible length    
    for (int i = 0; i < n; i++) {
        current_sum = (current_sum + nums[i]) % p;        
        // We look for a previous prefix remainder 'target' such that:
        // (current_sum - target + p) % p == rem
        // Which rearranges to: target = (current_sum - rem + p) % p
        int target = (current_sum - rem + p) % p;        
        if (mp.find(target) != mp.end()) {
            min_len = min(min_len, i - mp[target]);
        }        
        // Store/update the current remainder with the latest index
        mp[current_sum] = i;
    }    
    // If min_len wasn't updated or equals the entire array length, return -1
    return (min_len == n) ? -1 : min_len;
}

};