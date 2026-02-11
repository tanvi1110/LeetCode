// Last updated: 2/11/2026, 10:01:19 AM
class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int n = arr.size();
	int l = 0, r = n - 1;
    if(n == 1) return arr[0];
	if(arr[0] != arr[1]) return arr[0];
	if(arr[n-1] != arr[n-2]) return arr[n-1];
	while(l <= r) {
		int mid = l + (r - l) / 2;
		if(mid % 2 == 0) {
		 // element is on right half so eliminate left
		  if(arr[mid] == arr[mid - 1])  r = mid - 1; 
		  else if(arr[mid] == arr[mid + 1]) l = mid + 1;
		  else return arr[mid];

		} else {
			 if(arr[mid] == arr[mid - 1])  l = mid + 1; 
		  else if(arr[mid] == arr[mid + 1]) r = mid - 1;
		  else return arr[mid];

		}
		
	}
	return -1;
    }
};