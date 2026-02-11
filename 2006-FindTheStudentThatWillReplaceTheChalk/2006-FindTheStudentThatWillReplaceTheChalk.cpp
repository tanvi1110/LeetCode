// Last updated: 2/11/2026, 10:00:58 AM
class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        int n = chalk.size();
        long long totalChalkNeed = 0;
        for(int i = 0; i < n; i++) {
            totalChalkNeed += chalk[i];
        }
        int remainingChalk = k % totalChalkNeed;
        for(int i = 0 ; i < n; i++) {
            if(remainingChalk < chalk[i]) 
              return i;
            else remainingChalk -= chalk[i];
        }
        return 0;
    }
};