class Solution {
public:
  bool caneat(vector<int>& pile, int h, int k){
    long long hour=0;
    for(auto x:pile){
        hour+=x/k;
        if (x % k != 0) hour++;
          if (hour > h) return false;
    }
    return hour<=h;

  }
    int minEatingSpeed(vector<int>& piles, int h) {
        int left=1;
        int right=*max_element(piles.begin(), piles.end());
        int ans=right;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(caneat(piles,h,mid)){
             ans=mid;
             right=mid-1;
            }else{
                left=mid+1;
            }
        }
        return ans;
    }    
};