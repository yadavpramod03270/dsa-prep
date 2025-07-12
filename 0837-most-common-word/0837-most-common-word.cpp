class Solution {
public:
   string mostCommonWord(string paragraph, vector<string>& banned) {
    unordered_map<string, int> mp;
    unordered_set<string> bannedSet(banned.begin(), banned.end());
    string word = "";

    // Step 1: Normalize and split paragraph into words
    for (char& ch : paragraph) {
        if (isalpha(ch)) {
            word += tolower(ch);
        } else if (!word.empty()) {
            mp[word]++;
            word = "";
        }
    }
    if (!word.empty()) mp[word]++; // for last word if no punctuation after it

    // Step 2: Find max frequency of non-banned words
    int res = INT_MIN;
    string mostCommon = "";

    for (auto& y : mp) {
        if (bannedSet.find(y.first) != bannedSet.end()) {
            continue;
        } else if (y.second > res) {
            res = y.second;
            mostCommon = y.first;
        }
    }

    return mostCommon;
}

};