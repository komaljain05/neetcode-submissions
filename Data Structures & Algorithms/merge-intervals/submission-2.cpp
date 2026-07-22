class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& a) {
        sort(a.begin(),a.end());
        vector<vector<int>> res;
        int st=a[0][0];
        int end=a[0][1];
        for(int i=1;i<a.size();i++){
        int st2=a[i][0];
        int end2=a[i][1];
        if(end>=st2){
            end=max(end,end2);
            continue;
        }
        res.push_back({st,end});
        st=st2;
        end=end2;
    }
    res.push_back({st,end});
    return res;
    }
};
