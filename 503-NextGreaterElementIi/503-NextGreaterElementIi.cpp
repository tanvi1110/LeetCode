// Last updated: 17/03/2026, 21:05:44
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& a) {
        int n = a.size();
        vector<int> res(n, -1);
        stack<int> st;

        for(int i = 2*n - 1; i >= 0; i--) {
            int idx = i % n;

            while(!st.empty() && st.top() <= a[idx]) {
                st.pop();
            }

            if(i < n && !st.empty()) {
                res[idx] = st.top();
            }

            st.push(a[idx]);
        }

        return res;
    }
};