// Last updated: 03/03/2026, 12:32:13
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& a) {
        sort(a.begin(), a.end());
        vector<vector<int>> res;
        // start1, end1   start2, end2
         int j = 0;
        int start1 = a[0][0], end1 = a[0][1];
        for(int i = 1; i < a.size(); i++) { 
            int start2= a[i][0], end2 = a[i][1];
            if(end1 >= start2) {
                int maxi = max(end1, end2);
                end1 = maxi;
            }
            else {  
                res.push_back({start1, end1});
                start1 = start2;
                end1 = end2;
            }

        }
        res.push_back({start1, end1});
         return res;
        
    }
};