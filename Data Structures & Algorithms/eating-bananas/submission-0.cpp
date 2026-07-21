class Solution {
public:
long long fun(vector<int>&a,int guess){
    long long hour=0;
    for(int i=0;i<a.size();i++){
        hour+=(a[i]+guess-1)/guess;
    }
    return hour;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int low=1;
        int high=INT_MIN;;
        for(int i=0;i<n;i++){
            high=max(piles[i],high);
        }
        int res=high;
        while(low<=high){
            int guess=low+(high-low)/2;
            if(fun(piles,guess)>h){
                low=guess+1;
            }
            else{
                res=guess;
                high=guess-1;
            }
        }
        return res;
    }
};
