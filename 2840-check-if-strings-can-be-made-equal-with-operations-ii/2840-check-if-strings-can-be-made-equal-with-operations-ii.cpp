class Solution {
public:
    bool checkStrings(string s1, string s2) {
        int even[26] = {0}; // initially sab zero , kyunki hum even indices characters ki frequency difference store karenge
        int odd[26] = {0};

        for(int i = 0; i < s1.size(); i++) {
            if(i % 2 == 0) { // for even index
                even[s1[i] - 'a']++; // isme [i] ki freq ko increase karo
                even[s2[i] - 'a']--; // same [i] pr iski freq decrease karo ,bcoz s1 - s2 = 0 mila to freq same hai
            }
            else { // for odd indexes
                odd[s1[i] - 'a']++;// || same
                odd[s2[i] - 'a']--;
            }
        }

        for(int i = 0; i < 26; i++) {
            if(even[i] != 0 || odd[i] != 0) // kisi ek charcter ka bhi difference 0 nahi haito string equal nahi banskti
                return false;
        }

        return true;
    }
};