class Solution {
public:
    
        vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>v;
        // here we have to use two binary search , one is for first , and one is for last
        int start=0;
        int end=nums.size()-1;
        int first=-1;
        int last=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]==target){
                first=mid;
                end=mid-1;
            }
            else if(nums[mid]>target){
                end=mid-1;

            }else{
                start=mid+1;
            }
        }

        start=0;
         end=nums.size()-1;
         while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]==target){
                last=mid;
                start=mid+1;
            }
            else if(nums[mid]>target){
                end=mid-1;

            }else{
                start=mid+1;
            }
        }
        v.push_back(first);
        v.push_back(last);
        return v;
        }
           
};