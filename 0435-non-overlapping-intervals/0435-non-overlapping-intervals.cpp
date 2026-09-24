class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& nums) {
         if (nums.empty()) return 0;
    
    // 1. Sort intervals based strictly on their END times
    sort(nums.begin(), nums.end(), [](const vector<int>& a, const vector<int>& b) {
        return a[1] < b[1]; 
    });
    
        int res=0;
       // sort(nums.begin(),nums.end());
          int prev_end = nums[0][1]; 
        for(int i=1; i<nums.size(); i++){
            if(nums[i][0]<prev_end ){
              
                res++;
            }else {
            prev_end=nums[i][1];
            }
        }
        return res;
    }
};