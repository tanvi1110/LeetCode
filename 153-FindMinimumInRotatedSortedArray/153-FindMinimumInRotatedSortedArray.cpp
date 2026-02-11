// Last updated: 2/11/2026, 10:01:27 AM
class Solution {
public:
    int findMin(vector<int>& arr) {
        int n = arr.size(), l = 0, h = n - 1, ans = INT_MAX;
         while (l <= h) {
           int mid = l + (h - l) / 2;
           if(arr[mid] == 0) return arr[mid];
		   if(arr[l] <= arr[mid]) {
			   ans = min(ans, arr[l]);
			   l = mid + 1;
		   } else 
		   {
			   ans = min(ans, arr[mid]);
			   h = mid - 1;
		   }
         }
		 return ans;
    }
};