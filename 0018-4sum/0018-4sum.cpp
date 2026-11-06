class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) { // first check 3sum
        // for every element used the concept of three sum and also handle duplicates
        // basically fix two values and compute two sum for them
        int n = nums.size();
        vector<vector<int>> ans;

        if( n < 4) return ans;
        sort(nums.begin(),nums.end()); // -2 -1 0 0 1 2

        // three sum for n-3 elements
        for(int i = 0; i < n - 3; i++){
             // Skip duplicate i
            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            for(int j = i+1; j < n - 2; j++){
                // Skip duplicate j
                if (j > i + 1 && nums[j] == nums[j - 1])
                    continue;

                int left = j + 1;
                int right = n - 1;

                while(left < right){
                    long long sum = (long long)nums[i] + nums[j] + nums[left] + nums[right] ; 

                    if( sum == target){
                        ans.push_back({nums[i], nums[j], nums[left], nums[right]});
                        left++;
                        right--;
                        // skip duplicates values for left and right
                        while(left < right && nums[left-1] == nums[left]){
                            left++;
                        }

                        while(right > left && nums[right + 1] == nums[right]){
                            right--;
                        }

                    }
                    // if sum less than target , move left else right
                    else if( sum < target){
                        left++;
                    }
                    else right--;
                }
            }
        }
        return ans;
    }
};