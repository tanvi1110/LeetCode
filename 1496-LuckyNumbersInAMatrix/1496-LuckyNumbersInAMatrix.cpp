// Last updated: 2/11/2026, 10:01:07 AM
class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
         int rows = matrix.size();
         int cols = matrix[0].size();
        vector<int> mini(rows, INT_MAX);
        vector<int> maxi(cols, 0);
        for(int i = 0; i < rows; i++) {
          for(int j = 0; j < cols; j++) {
            int el = matrix[i][j];
            mini[i] = min(mini[i], el);
            maxi[j] = max(maxi[j], el); 
          }   
        }
   vector<int> luckyNumber(0, -1);
        for(int i = 0; i < rows; i++) {
           for(int j = 0; j < cols; j++) {
            if (matrix[i][j] == mini[i] && matrix[i][j] == maxi[j]) {
                luckyNumber.push_back(mini[i]); // Return the element from mini when the condition is met
            }

        }
    }
    return luckyNumber;
    
}

};



