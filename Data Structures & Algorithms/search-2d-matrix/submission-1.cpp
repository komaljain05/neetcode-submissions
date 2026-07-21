class Solution {
public:
    bool searchMatrix(vector<vector<int>>& a, int target) {
      int n=a.size();
      int m=a[0].size();
      int low=0;
      int high=n*m-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            int row= mid/m;
            int colm= mid%m;
            if(a[row][colm]==target){
                return true;
            }
            else if(a[row][colm]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return false;

    }
};
