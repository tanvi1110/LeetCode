// Last updated: 21/02/2026, 19:05:24
class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int nodelete = arr[0];
        int onedelete = INT_MIN;
        int ans = arr[0];

        for(int i = 1; i<arr.size(); i++) {
            int prevnodelete = nodelete;
            int prevonedelete = onedelete;
            int v2;
            if(prevonedelete == INT_MIN) {
                v2 = arr[i];
            
            } else {
                v2 = prevonedelete + arr[i];
            }

            nodelete = max(nodelete + arr[i], arr[i]);
            onedelete = max(v2, prevnodelete);
            ans = max({ans, onedelete, nodelete});
        }
        return ans;
    }
};