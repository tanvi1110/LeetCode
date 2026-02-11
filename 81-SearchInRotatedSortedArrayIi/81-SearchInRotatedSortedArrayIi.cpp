// Last updated: 2/11/2026, 10:01:31 AM
class Solution {
public:
    bool search(vector<int>& arr, int k) {
         int n = arr.size(), l = 0, h = n - 1;
    while(l <= h) {
        int mid = l + (h - l)/2;
        if(arr[mid] == k) return true;
        
        if(arr[l] == arr[mid] && arr[mid] == arr[h]) {
            l = l + 1; h = h - 1;
            continue;
        }
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
    return false;
    }
};