class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>v;
    std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<std::pair<int, int>>> mn;
     unordered_map<int,int>mp;
     for(auto &x:nums ){
        mp[x]++;
     }
     for(auto &[key,val]:mp){
        mn.push({val,key});
        if(mn.size()>k){
            mn.pop();
        }
     }
     while(!mn.empty()){
        v.push_back(mn.top().second);
        mn.pop();
     }
        return v;    

        
    }
};