class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>v;
        unordered_map<int,int>mp;
        for(int i=0; i<nums.size(); i++){
            if(mp.contains(target-nums[i])){
                v.push_back(mp[target - nums[i]] + 1); 
                v.push_back(i+1);
                break;
            }
            mp[nums[i]]=i;
        }
        return v;
    }
};