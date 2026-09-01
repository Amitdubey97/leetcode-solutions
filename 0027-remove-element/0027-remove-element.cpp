class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
       int n = nums.size();
       int k = 0;
       for(int i =0;i<n;i++){
        if(nums[i] != val){ // if nums[i] = 3 .... skip
                          // if nums[i] != 3 ... k++
            nums[k] = nums[i]; // k me i ki vakue dalo
            k++;
        }
       }
       return k; // ab un values ko output me dedo
 }
};