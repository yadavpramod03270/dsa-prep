class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>v;
        for(const auto& x: nums){
            v.emplace_back(x*x);
        }
        sort (v.begin(), v.end());
        return v;
        
    }
};