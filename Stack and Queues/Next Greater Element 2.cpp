//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> nextGreaterElement(int N, vector<int>& arr) {
        // code here
        stack<int>st;
        vector<int>res;
        int n = arr.size();
        for(int i = n-1 ;i>=0;i--)
        {
            st.push(arr[i]);
        }
        for(int i = n-1;i>=0;i--)
        {
            while(!st.empty() && st.top() <= arr[i])
            {
                st.pop();
            }
            if(st.size() == 0)
            {
                res.push_back(-1);
            }
            else
            {
                res.push_back(st.top());
            }
            st.push(arr[i]);
        }
         reverse(res.begin(),res.end());
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> arr(N);
        for (int i = 0; i < N; i++) cin >> arr[i];

        Solution obj;
        vector<int> ans = obj.nextGreaterElement(N, arr);
        for (auto &it : ans) {
            cout << it << ' ';
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends