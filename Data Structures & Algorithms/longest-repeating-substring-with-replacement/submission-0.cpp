class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        int low=0;
        int res=0;
        unordered_map<char,int>f;
        int freq=0;
        for(int high=0;high<n;high++){
            f[s[high]]++;
            freq=max(freq,f[s[high]]);
            while((high-low+1)-freq>k){
                f[s[low]]--;
                low++;
            }
            int len=high-low+1;
            res=max(len,res);
        }
        return res;
    }
};
