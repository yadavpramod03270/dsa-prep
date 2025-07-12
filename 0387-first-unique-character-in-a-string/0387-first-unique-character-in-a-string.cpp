class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int>mp;
            for(auto x: s){
                mp[x]++;
            }
        for(int i=0; i<s.size();i++){
            if(mp.find(s[i])!=mp.end() && mp[s[i]]==1){
                return i;
                break;

            }
        }
        return -1;
    }
};