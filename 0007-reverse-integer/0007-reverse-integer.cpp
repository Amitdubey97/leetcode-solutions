
class Solution {
public:
    int reverse(int x) {
        long long int digit;
        long long int y=0;
        while(x!=0){
            digit=x%10;
            x=x/10;
            y=y*10+digit;
        }
        if (y > 2147483647 || y < -2147483648)  // for overflow condition
            return 0;

    return y;
    }
};