class Solution {
public:
    int numOfSubarrays(vector<int>& nums, int k, int threshold) {
        int i=0;
        int j=0;
        int count=0;
        int res=0;
        int sum=0;
        while(j<nums.size()){
            sum+=nums[j];
            count++;
            //cout<<sum<<" "<<count<<" ";
            if(j-i+1<k){
                j++;
            }
            else if(j-i+1==k){
                cout<<sum<<" "<<count<<"--> ";
                int data=sum/k;
                cout<<"data: "<<data<<"  ";
                if(data>=threshold){
                    res++;
                }
                sum-=nums[i];
                i++;
                j++;

            }
        }
        return res;
    }
};