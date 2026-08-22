class Solution {
public:
    bool checkDivisibility(int n) {
        int org = n; // original number
        int sum =0;
        int product = 1;
       while(n != 0){
        int rem = n % 10; // extract last digit
         sum += rem; // sum = sum + remaining
         product *= rem; // product = product * remaining
        n /=10; // to remove last digit

       }
       return org % (sum + product) == 0; 
    }
};
