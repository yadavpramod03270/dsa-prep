class Solution {
public:
       vector<vector<string>> groupAnagrams(vector<string>& strs) {
      vector<vector<string>>v;
      unordered_map<string,vector<string>>mp;
      for(auto &x: strs){
        string temp=x;
        sort(x.begin(), x.end());
        mp[x].push_back(temp);
      }
      for(auto &x: mp){
        v.push_back(x.second);

      }
      return v;
       }
};