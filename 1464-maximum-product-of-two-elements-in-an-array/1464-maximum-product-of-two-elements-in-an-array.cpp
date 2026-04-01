class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int>pq;
        int res=0;
        for(auto x: nums){
            pq.push(x);
        }
        while(!pq.empty()){
            int f=pq.top();
            
            pq.pop();
            int s=pq.top();
            
            pq.pop();
           

            res=(f-1)*(s-1);
            break;
            
        }
        return res;
        
    }
};