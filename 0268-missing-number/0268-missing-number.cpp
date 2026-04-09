class Solution {
public:
    int missingNumber(vector<int>& nums) {

         int n=nums.size();
       int i=0;
       sort(nums.begin(), nums.end());
      while(i<n){
            if(nums[i]!=i){
            return i;
            }
            i++;
      }
         
         return i;
                

     
    }
        
};