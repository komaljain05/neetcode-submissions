class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
       unordered_map<char,int>f;
        for(auto i:s){
            f[i]++;
        }
        for(auto i:t){
            f[i]--;
        }
        for(auto it:f){
        if(it.second!=0){
            return false;
        }
        }
        return true;
       }
    };
