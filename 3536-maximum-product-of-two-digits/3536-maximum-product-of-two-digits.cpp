class Solution {
public:
    int maxProduct(int n) {
        string s = to_string(n); // sabse pehle isko string me convert karenge

        sort(s.begin(),s.end()); //sort karenge jisse bade no. last me aaenge
         int a = s[s.size() - 1] - '0';
         int b = s[s.size() - 2] - '0';

         return a*b;
    }

};