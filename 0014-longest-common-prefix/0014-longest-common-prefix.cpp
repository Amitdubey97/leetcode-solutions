class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        string prefix = strs[0]; //initialise first string is prefix
         for(int i = 1; i < n; i++){ // compare karenge prefix ko agale strings se
            int j = 0; // j only counts characters
             while(j < prefix.size()&&   //char count prefix ki count se zyada na ho
                   j < strs[i].size()&&  // char count bs string ki lenght tk ho
                   prefix[j] == strs[i][j]){  
                    j++;
                   }
                   prefix = prefix.substr(0,j); // ye btaega ki starting se kitne character print karne gai prefix me se
         }
         return prefix;
    }
};