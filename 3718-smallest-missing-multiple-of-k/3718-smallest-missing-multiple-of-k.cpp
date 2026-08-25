class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
         int n = nums.size();
         unordered_set<int> st(nums.begin(), nums.end());
         int multiple = k;

         while(true){
            if(st.find(multiple) == st.end()){
                return multiple;
            }
            multiple += k;
         }
    }
};