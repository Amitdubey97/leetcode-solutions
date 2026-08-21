class Solution {
public:
    int reverse(int x) {
        int rev = 0;

        while(x != 0){
            int digit = x%10;
            x= x/10;
             // check for overflow
             if(rev > INT_MAX / 10 ||(rev == INT_MAX / 10 && digit > 7)) // for positive no.
             return 0;

             if(rev < INT_MIN / 10 || (rev == INT_MIN / 10 && digit < -8))// for negative no.
             return 0;

             rev = rev * 10 + digit;
        }
        return rev;

    }

};