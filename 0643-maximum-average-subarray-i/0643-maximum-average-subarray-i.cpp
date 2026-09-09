class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
      double maxval=INT_MIN;
      int i=0;
      int j=0;
      double sum=0;
      while(j<nums.size()){
        sum+=nums[j];
        if(j-i+1<k){
            j++;
        }
        else if(j-i+1==k){
            if(sum>maxval){
                maxval=sum;
            }
            sum=sum-nums[i];
            i++;
            j++;
        }
      }
      return maxval/k;
    }
};