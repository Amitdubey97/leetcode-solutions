class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int cntLess = 0, cntGrt = 0;
        for(auto it : nums){
            if(it < target){
                cntLess++;
            }else if(it > target){
                cntGrt++;
            }
        }
        vector<int> sol;
        int n = nums.size() - cntGrt - cntLess;
        for(int i = 0; i < n; i++){
            sol.push_back(i + cntLess);
        }
        return sol;
    }
};