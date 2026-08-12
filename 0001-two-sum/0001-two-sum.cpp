class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
  
     unordered_map<int,int>mp;
     vector<int>v;
      for(int i=0; i<nums.size(); i++){
        int val=target-nums[i];
        if(mp.find(val)!=mp.end()){
            v.push_back(mp[val]);
            v.push_back(i);
            
        }
        mp[nums[i]]=i;
      }
      return v;
    }
};