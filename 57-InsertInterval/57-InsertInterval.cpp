// Last updated: 03/03/2026, 12:32:12
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals,
                               vector<int>& newInterval) {

        vector<vector<int>> res;
        int i = 0;
        bool insert = false;
        while (i < intervals.size()) {
            if(insert == false && intervals[i][0] >= newInterval[0])           
            {
                res.push_back(newInterval);
                insert = true;
            }
            res.push_back(intervals[i]);
            i++;
        }

        if (insert == false) {
            res.push_back(newInterval);
        }

         vector<vector<int>> res1;
        int j = 0;
        int start1 = res[0][0], end1 = res[0][1];
        for(int i = 1; i < res.size(); i++) { 
            int start2= res[i][0], end2 = res[i][1];
            if(end1 >= start2) {
                int maxi = max(end1, end2);
                end1 = maxi;
            }
            else {  
                res1.push_back({start1, end1});
                start1 = start2;
                end1 = end2;
            }

        }
        res1.push_back({start1, end1});
         return res1;
    }
};