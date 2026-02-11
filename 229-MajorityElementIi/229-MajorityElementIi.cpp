// Last updated: 2/11/2026, 10:01:21 AM
class Solution {
public:
    vector<int> majorityElement(vector<int>& v) {
        	map<int, int> mpp;
	vector<int> arr;
    int n = v.size();
	float compare = n/3;;
	for(int i = 0; i < n; i++) {
		mpp[v[i]]++;
	}
	for(auto it: mpp) {
		if(it.second > compare) 
		   arr.push_back(it.first);
	}
	return arr;
    }
};