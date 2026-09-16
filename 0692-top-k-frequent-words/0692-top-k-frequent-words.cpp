class Solution {
public:
   vector<string> topKFrequent(vector<string>& words, int k) {
   unordered_map<string, int> mp;
    for(auto& x: words){
        mp[x]++;
    }
    auto cmp=[](pair<string,int>&a, pair<string,int>&b){;
        if(a.second==b.second){
            return a.first< b.first;
        }
        return a.second> b.second;
    };
    priority_queue<pair<string,int>, vector<pair<string,int>>, decltype(cmp)> pq(cmp);
    
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