class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
         int n = nums.size();
         unordered_set<int> st(nums.begin(), nums.end());
         int multiple = k; //k ke multiples check krna start karo

         while(true){

            //agar multiple set nahi hai to ye smallest missing multiple hai
            if(st.find(multiple) == st.end()){
                return multiple;
            }
            multiple += k; // next multiple
         }
    }
};
