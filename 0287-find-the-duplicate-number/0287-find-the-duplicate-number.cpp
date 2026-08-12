class Solution {
public:
    int findDuplicate(vector<int>& nums) {
     unordered_map<int,int>mp;
     for(auto x: nums){
        mp[x]++;
     }
     for( const auto &[key,val]: mp){
        if(val>=2){
            return key;
        }
     }
     return -1;
    }
};