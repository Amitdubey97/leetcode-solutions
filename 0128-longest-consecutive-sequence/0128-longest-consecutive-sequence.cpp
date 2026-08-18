class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;
        int longest = 1;

        unordered_set<int> st;
        for(int i =0;i<n;i++){
            st.insert(nums[i]);
        }

        for(auto it : st){
            if(st.find(it -1) == st.end()){// ye check karta hai ki it -1 (usse ek chhota no.)set me hai ya nahi, agar nahin iska matlab it kisi sequence ka starting pont hai.
                int cnt = 1;
                int x= it; // first element sequence ka
                while(st.find(x+1)!= st.end()){// jab tak agla consecutive no.(x+1)  milta rahe count ko badhate raho.
                    x= x+1; // if you found go to the next sequence
                    cnt = cnt+1; // increase the count to add 1.
                }
                longest = max(longest,cnt);
            }
        }
        return longest;
    }
};