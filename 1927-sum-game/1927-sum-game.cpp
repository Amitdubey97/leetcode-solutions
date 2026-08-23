class Solution {
public:
    bool sumGame(string num) {
        int n = num.size();
        int ql =0,qr = 0; 
        long long diff = 0;

        for(int i =0;i<n/2;i++){ // first half
            if(num[i]=='?') ++ql;
            else diff += num[i] -'0';
        }
        for(int i=n/2; i<n; i++){ // sercond half
            if(num[i]=='?') ++qr;
            else diff -= num[i] -'0';

        }
        if((ql +qr)&1) // agar '?' ka count odd to alice hamesha jeetega
        return true;

        return diff != (9*(qr-ql))/2; 
    }
};
