// Last updated: 23/03/2026, 23:42:37
class Solution {
public:
    int longestPalindrome(string s) {
        if(s.size()==1) return 1;
        map<char, int> mp;

        for(int i = 0 ; i < s.size(); i++) {
            mp[s[i]]++;
        }
        if(mp.size() == 1) {
            return mp.begin()->second;
        }

        int sum = 0; bool flag = false;
        int maxi = INT_MIN;

        for(auto i: mp) {
            int val = i.second;
            if(val % 2 == 0) sum += val;

            else {
            sum += val - 1;
              flag = true;
            } 
        }
        if(sum % 2 == 0 && flag == true) sum++;
        return sum ;
        
        

    }
};