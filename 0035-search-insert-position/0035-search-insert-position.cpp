class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int f=0;// first position of the search range
        int mid; // middle position
        int l=nums.size()-1; // represents the last position of search range
        while(f<=l){
            mid = (f+l)/2;
            if(nums[mid]==target){
                return mid;
            }else if(nums[mid]>target){
                l=mid-1;
            }else{
                f=mid+1;
            }
        }
        return f;
    }
};