class Solution {
public:
vector<int> searchRange(vector<int>& nums, int target) {
    int first=-1;
    int last=-1;
    int i=0; 
    int j=nums.size()-1;
    while(i<=j){
        int mid=i+(j-i)/2;
        if(nums[mid]==target){
            first=mid;
            j=mid-1;
        }
        else if(nums[mid]>target){            
            j=mid-1;
        }
        else{
            i=mid+1;
        }
    }
    int start=0; 
    int end=nums.size()-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(nums[mid]==target){
            last=mid;
            start=mid+1;
        }
        else if(nums[mid]>target){            
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return {first,last};

}           
};