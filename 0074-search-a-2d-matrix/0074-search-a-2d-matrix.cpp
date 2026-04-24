class Solution {
public:
      bool searchMatrix(vector<vector<int>>& mat, int target) {
        int flag=0;
        for(int i=0; i<mat.size(); i++){
            for(int j=0; j<mat[0].size(); j++){
                if(mat[i][j]==target){
                    flag=1;
                }
            }
        }
        if(flag==1){
            return true;
        }
        return false;
        
    }
};