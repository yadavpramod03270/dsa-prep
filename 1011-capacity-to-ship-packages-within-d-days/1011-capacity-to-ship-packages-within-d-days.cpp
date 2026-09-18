class Solution {
public:
bool leastcapacity(vector<int>& weights, int days,int md){
    int count=1;
    int sum=0;
    for(int x: weights){
        if(x>md) return false;
        if(sum+x>md){
            count++;
            sum=0;
        }
        sum+=x;           
        }
    return days>=count;
}
    int shipWithinDays(vector<int>& weights, int days) {
        int left=*max_element(weights.begin(),weights.end());;
        int right=accumulate(weights.begin(),weights.end(),0);
      //  cout<<left<<" "<<right;
        int res=right;
        while(left<=right){
            int mid=left+(right-left)/2;
            cout<<mid<<" ";
            if(leastcapacity(weights,days,mid)){
                res=mid;
                cout<<res;
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return res;
    }
};