class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       unordered_map<int,int>f;
       for(auto i:nums){
        f[i]++;
       } 
       priority_queue<pair<int,int>>pq;
       for(auto it:f){
        pq.push({it.second,it.first});
       }
        vector<int>res;

        while(k--) {
        int element=pq.top().second;
        res.push_back(element);
        pq.pop();
       }
       return res;
       }
    };
