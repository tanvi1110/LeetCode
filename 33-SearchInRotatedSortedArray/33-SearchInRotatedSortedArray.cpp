// Last updated: 2/11/2026, 10:01:37 AM
class Solution {
public:
    int search(vector<int>& arr, int k) {
        int n = arr.size();
         int l = 0, h = n - 1;
    while(l <= h) {
        int mid = l + (h - l)/2;
        if(arr[mid] == k) return mid;
         // left sorted
         if(arr[l] <= arr[mid]) {
             if(k >= arr[l] && k <= arr[mid]) h = mid - 1;
             else l = mid + 1;

         } 
         // right sort 
         else {
             if(k >= arr[mid] && k <= arr[h]) l = mid + 1;
             else h = mid - 1;
         }
    }
    return -1;
    }
};