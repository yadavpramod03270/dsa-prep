class Solution {
public:
    
        
   bool canConstruct(string ransomNote, string magazine) {
    unordered_map<char, int> mp;
    
    // 1. Count available letters in magazine
    for (char c : magazine) {
        mp[c]++;
    }
    
    // 2. Consume letters for ransomNote
    for (char c : ransomNote) {
        // If the character doesn't exist or we ran out of it
        if (mp[c] <= 0) {
            return false;
        }
        mp[c]--; // Use one letter
    }
    
    return true;
}

};