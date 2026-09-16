class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        unordered_map<char, int> mp;
        for (char c : ransomNote) {
         mp[c]++;
          }

        for(int i=0; i<magazine.size(); i++){
            if(mp.find(magazine[i])!=mp.end()){
                mp[magazine[i]]--;
            }
             if (mp[magazine[i]] == 0) {
                mp.erase(magazine[i]);
            }
        }
           return mp.empty(); 
    }
};