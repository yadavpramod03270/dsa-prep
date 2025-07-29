class Solution {
public:
 vector<string> topKFrequent(vector<string>& words, int k) {
    map<string, int> mp;
    for (auto& word : words) {
        mp[word]++;
    }

    // Using a max-heap (priority_queue)
    priority_queue<pair<int, string>> pq;

    for (auto& entry : mp) {
        // Push negative frequency to make min-heap behavior
        pq.push({-entry.second, entry.first});
    }

    // Move all elements to a vector for sorting
    vector<pair<int, string>> sorted;
    while (!pq.empty()) {
        sorted.push_back(pq.top());
        pq.pop();
    }

    // Sort based on:
    // 1. frequency ascending (since we stored -freq)
    // 2. if frequency same, then lexicographically increasing
    sort(sorted.begin(), sorted.end(), [](const pair<int, string>& a, const pair<int, string>& b) {
        if (a.first == b.first)
            return a.second < b.second;
        return a.first < b.first; // already negative
    });

    // Collect first k words
    vector<string> result;
    for (int i = 0; i < k; ++i) {
        result.push_back(sorted[i].second);
    }

    return result;
}
};