// Last updated: 2/11/2026, 10:00:56 AM


class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int maxi = 0;
        int maxArea = 0;

        int len = dimensions.size();  int diagonal = 0;
        for(int i =0; i<len; i++) {

           diagonal = (dimensions[i][0] * dimensions[i][0] + dimensions[i][1] * dimensions[i][1]);
           int area = dimensions[i][0] * dimensions[i][1];
           if(diagonal > maxi || diagonal == maxi && area > maxArea )
           {
            maxi = diagonal;
            maxArea = area;
           } 
        }
    return maxArea;
    }
};