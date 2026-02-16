// Last updated: 16/02/2026, 15:10:21
class Solution {
public:

    bool sahi(vector<int>& have, vector<int>& needed) {
        for(int i = 0; i < 256; i++) {
            if(have[i] < needed[i]) {
                return false;
            }
        }
            return true;
    }

    string minWindow(string s, string t) {
        int low = 0, high = 0;

        int n = int(s.size());
        int m = int(t.size());
        vector<int> have(256, 0), needed(256, 0);
        int res = INT_MAX;
        int start = -1;

        if(n < m) {
            return "" ;
        }
        for(int i = 0; i < m; i++) {
            needed[(unsigned char)t[i]]++;
        }

        for(int high = 0 ; high < n; high++) {
            have[s[high]]++;
            // jbtk info shi h result ko include kro
            while(sahi(have, needed)) {
                int len = high - low + 1;
                if(len < res) {
                    res = len;
                    start = low;
                }
                have[(unsigned char)s[low]]--;
                low++;
            }

        }
        if(start == -1)
        return "";
        return s.substr(start, res);
    }
};