class Solution {
public:
    // This helper checks: Can we split 'nums' into 'k' or fewer subarrays 
    // such that NO subarray has a sum greater than 'maxSumLimit'?
    bool canSplit(const vector<int>& nums, int k, int maxSumLimit) {
        int currentSubarraySum = 0;
        int subarrayCount = 1; // Start with the first subarray group

        for (int num : nums) {
            // If a single element is larger than our allowed limit, it's impossible
            if (num > maxSumLimit) return false; 

            if (currentSubarraySum + num <= maxSumLimit) {
                currentSubarraySum += num; // Keep adding to the current subarray
            } else {
                // Current subarray is full! Start a new one with the current number
                subarrayCount++;
                currentSubarraySum = num;
            }
        }

        // If total groups needed is <= k, this 'maxSumLimit' is valid (feasible)
        return subarrayCount <= k;
    }

    int splitArray(vector<int>& nums, int k) {
        // 1. Establish the answer boundaries (not index boundaries!)
        int left = 0;
        int right = 0;
        for (int num : nums) {
            left = max(left, num); // 'left' is the largest single element
            right += num;          // 'right' is the sum of all elements
        }

        int res = right; // Fallback default answer

        // 2. Binary Search over the candidate sums
        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (canSplit(nums, k, mid)) {
                res = mid;       // 'mid' works! Record it as a potential minimum
                right = mid - 1; // Try to look for an even smaller valid maximum sum
            } else {
                left = mid + 1;  // 'mid' is too small; we need a larger limit
            }
        }
        return res;
    }
};

