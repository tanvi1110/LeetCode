// Last updated: 2/11/2026, 10:01:42 AM
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int low = 0, high = 0;
        int res = INT_MIN; int k = 0;
        unordered_map<char, int> f;
        if(s.size() == 0) return 0;
        while(high < s.size()) {
            f[s[high]]++;
                int len = high - low + 1;
            while(f.size() < len) {
                f[s[low]]--;
                if(f[s[low]] == 0 ) {
                    f.erase(s[low]);
                }
                low++;
                len = high - low + 1;
            }
             len = high - low + 1;
            res = max(len, res);
            high++;


        }
        return res;
    }
};