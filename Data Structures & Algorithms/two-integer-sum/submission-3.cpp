class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int ,int>f;
            for(int i=0;i<nums.size();i++){
                int k=target-nums[i];
                if(f.find(k)!=f.end()){
                    return {f[k],i};
                }
                f[nums[i]]=i;
            }
        return {};
    }
};
