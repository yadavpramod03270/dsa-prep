class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>res;
        unordered_map<int,int>mp;
       std::priority_queue<
        std::pair<int, int>, 
        std::vector<std::pair<int, int>>, 
        std::greater<std::pair<int, int>>
    > minHeap;

        for(const auto&x: nums){
            mp[x]++;
        }
        for(auto &[key,val]: mp){
            minHeap.push({val,key});
            if(minHeap.size()>k){
                minHeap.pop();
            }
        }

        while(!minHeap.empty()){
             std::pair<int, int> current = minHeap.top();
            res.push_back(current.second);
            minHeap.pop();
        }

return res;

        
    }
};