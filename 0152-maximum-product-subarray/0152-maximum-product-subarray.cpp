class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
     if (nums.empty()) return 0;
    if (nums.size() == 1) return nums[0];
    if (nums.size() == 2 && (nums[0] == 0 || nums[1] == 0)) { 
        return max(nums[0], nums[1]);
    }
    int res=INT_MIN;
        int prod=1;
        for(int i=0; i<nums.size(); i++){
            prod*=nums[i];
            cout<<prod<<" ";
            res=max(res,prod);
            if(prod==0) prod=1;
        }

         prod = 1;
    for (int i = nums.size() - 1; i >= 0; i--) {
        prod *= nums[i];
        res = max(res, prod);
        if (prod == 0) prod = 1; 
    }
         return res;
        
    }












    
};