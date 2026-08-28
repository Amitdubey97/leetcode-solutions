class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n = nums.size()-1;
        vector<int> count(n+1,0);

        for(int num : nums){
            if(num < 1 || num > n) return false; //out of valid range
            count[num]++;
        }
        for(int i = 1; i<n ; i++){
            if(count[i] != 1) return false; // 1 ... n-1 must appear exactly once
        }
        return count[n]==2; // n appears exactly twice
    }
};