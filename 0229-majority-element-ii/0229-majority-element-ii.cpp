class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int siz1e=nums.size()/3;
        unordered_map<int,int>mp;
        vector<int>v;
        for(auto x: nums){
            mp[x]++;
        }
        for(auto y: mp){
          if(y.second>siz1e){
            v.push_back( y.first);
          }
        }
        return v;
    }
};