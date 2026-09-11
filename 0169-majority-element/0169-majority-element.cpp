class Solution {
public:
    int majorityElement(vector<int>& nums) {
       unordered_map<int,int>mp;
       for(auto x: nums){
        mp[x]++;
       }
       int maxi=INT_MIN;
       int res;
       for(auto x: mp){
        if(x.second>maxi){
            maxi=x.second;
            res=x.first;
        }
       }
       return res;
    }
};