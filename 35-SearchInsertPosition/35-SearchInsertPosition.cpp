// Last updated: 2/11/2026, 10:01:34 AM
class Solution {
public:
    int searchInsert(vector<int>& arr, int m) {
         int n = arr.size();
    int ans = n;
    int left = 0, right = n - 1;
    
    while (left <= right) {
        int mid = left + ( (right - left) / 2 );
        // Debug: print intermediate values
        if (arr[mid] >= m) {
            ans = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return ans;
    }
};