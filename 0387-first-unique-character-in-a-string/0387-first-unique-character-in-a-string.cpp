class Solution {
public:
    int firstUniqChar(string s) {
         unordered_map<char, int>mp;
       for(const auto &x: s){
        mp[x]++;
       }
        for(int i = 0; i < s.length(); i++){        
        // Using contains() as requested (C++20 feature)
        if(mp.contains(s[i]) && mp[s[i]] == 1){
            return i; // Return the index of the character
        }
    }
       return -1;
    }
       
};