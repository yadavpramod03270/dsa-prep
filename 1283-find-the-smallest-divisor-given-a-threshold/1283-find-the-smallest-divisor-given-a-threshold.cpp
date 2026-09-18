class Solution {
public:
    bool canwork(vector<int>& nums, int threshold,int md){
        int sum=0;
        for(auto &x: nums){
            sum+=(x + md - 1) / md;
        }
        return sum<=threshold;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int left=1;
        int  right=*max_element(nums.begin(),nums.end());
        int res=right;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(canwork(nums,threshold,mid)){
                res=mid;
                right=mid-1;
            }else{
                left=mid+1;
            }
        }
        return res;
        
    }
};