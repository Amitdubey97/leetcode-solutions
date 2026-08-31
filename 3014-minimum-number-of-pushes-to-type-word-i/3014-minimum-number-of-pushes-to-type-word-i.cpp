/* APPROACH
pehle 8 letters - 1 push
dusre 8 letters - 2 push
next 8 letters - 3 push
remaining - 4 push

word ke sare charachters distint hai . total 8 keys(2-9)
*/
class Solution {
public:
    int minimumPushes(string word) {
       int n = word.size();
       int ans = 0;

       for(int i =0; i<n; i++){
        ans+= (i/8)+1; // 8 charcters hai isiliye 1 iteration me 1 push ... so on
       } 
       return ans;
    }
};