// Last updated: 2/11/2026, 10:01:15 AM
class Solution {
public:
    int totalFruit(vector<int>& fruits) {

        int count = 0, res = INT_MIN;
        unordered_map<int, int> f;
        int low = 0, high = 0;
        while(high < fruits.size()) {
            f[fruits[high]]++; 
            while(f.size() > 2) {
                f[fruits[low]]--;
                if(f[fruits[low]] == 0) {
                    f.erase(fruits[low]);
                   
                }
                 low++;

            }
            int len = high - low + 1;
            res = max(len, res);
            high++;
        }
        return res;
    }
};