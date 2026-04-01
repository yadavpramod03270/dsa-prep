class Solution {
public:
   vector<string> topKFrequent(vector<string>& words, int k) {
    unordered_map<string, int> mp;
    
    for(auto& w : words){
        mp[w]++;
    }
    
    // custom comparator
    auto comp = [](pair<string,int>& a, pair<string,int>& b){
        if(a.second == b.second){
            return a.first < b.first; // lex smaller = better → remove larger
        }
        return a.second > b.second; // higher freq = better → remove smaller
    };
    
    priority_queue<pair<string,int>, vector<pair<string,int>>, decltype(comp)> pq(comp);
    
    for(auto& p : mp){
        pq.push(p);
        if(pq.size() > k){
            pq.pop();
        }
    }
    
    vector<string> ans;
    
    while(!pq.empty()){
        ans.push_back(pq.top().first);
        pq.pop();
    }
    
    reverse(ans.begin(), ans.end()); // important
    
    return ans;
}
};