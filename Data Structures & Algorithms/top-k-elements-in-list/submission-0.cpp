class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       unordered_map<int,int>f;
       for(auto i:nums){
        f[i]++;
       } 
       priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
       for(auto it:f){
        pq.push({it.second,it.first});
        if(pq.size()>k){
            pq.pop();
        }
       }
        vector<int>res;
        while(!pq.empty()) {
        int element=pq.top().second;
        res.push_back(element);
        pq.pop();
       }
       return res;
       }
    };
