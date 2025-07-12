class Solution {
public:
    int findLucky(vector<int>& arr) {
        vector<int>v;
        unordered_map<int, int>mp;
        for(auto x: arr){
            mp[x]++;
        }
        for(auto y: mp){
            if(y.first==y.second){
                v.push_back(y.second);
            }
        }
            if (v.empty()) return -1;
        sort(v.begin(), v.end());
        
        return v.back();
        
    }
};