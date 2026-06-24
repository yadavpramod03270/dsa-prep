class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> mn;
       for(auto &x: nums){
        mn.push(x);
        if(mn.size()>k){
            mn.pop();
        }
       }
       return mn.top();
    }
       
};