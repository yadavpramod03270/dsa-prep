class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double res=INT_MIN;
        int i=0; 
        int j=0;
        double sum=0.0;
        while(j<nums.size()){
            sum+=nums[j];
             if (j-i+1==k){
                double temp=sum/k;
                res = std::max(res, temp);
                sum-=nums[i];
                i++;
            }
            j++;
        }
        return res;
    }
};