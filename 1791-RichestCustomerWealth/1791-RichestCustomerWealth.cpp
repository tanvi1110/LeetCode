// Last updated: 2/11/2026, 10:01:02 AM
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum; int maxi = -1e9;
        int row = accounts.size();
        int col = accounts[0].size();
        for(int i = 0; i < row; i++) {
            sum = 0;
            for(int j = 0; j < col; j++) {
                sum += accounts[i][j];
            }
            maxi = max(maxi, sum);
        }
        return maxi;

    }
};








