class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {

        unordered_map<int,int>mp;
        for(int i=0; i<nums.size(); i++){
            if(mp.contains(nums[i])){
                int val=abs(i-mp[nums[i]]);
                if(val<=k){
                    return true;
                }
                //return false;
            }
            mp[nums[i]]=i;
        }
        return false;
    }
};