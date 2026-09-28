class Solution {
public:
vector<int> findAnagrams(string s, string p) {
    int k = p.size();
    vector<int> v;    
    // 1. Setup frequency counters for 'a' through 'z'
    vector<int> p_count(26, 0);
    vector<int> window_count(26, 0);
    
    for (char c : p) {
        p_count[c - 'a']++;
    }    
    // 2. Keep your exact sliding window pointer structure
    int i = 0;
    int j = 0;    
    while (j < s.size()) {
        // Expand: Add character at 'j' to our tracker
        window_count[s[j] - 'a']++;
        
        // Case 1: Window size is still less than k
        if (j - i + 1 < k) {
            j++;
        }
        // Case 2: Window size hits exactly k
        else if (j - i + 1 == k) {
            // Check frequencies in O(1) time instead of sorting strings
            if (window_count == p_count) {
                v.push_back(i);
            }
            
            // Shrink: Remove character at 'i' from tracker before moving forward
            window_count[s[i] - 'a']--;
            
            // Slide forward together
            i++;
            j++;
        }
    }
    return v;
}

};