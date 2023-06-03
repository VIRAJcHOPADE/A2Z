//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string removeKdigits(string num, int k) {
        stack<char> st;
        string ans = "";

        for(int i = 0; i < num.size(); i++)
        {
            while(!st.empty() && st.top() > num[i] && k)
            {
                k--;
                st.pop();
            }
            if(st.size() == 0 && num[i] == '0')
            {
                continue;
            }
            st.push(num[i]);

        }

        while(!st.empty() && k)
        {
            st.pop();
            k--;
        }

        if(st.empty())
        {
            return "0";
        }

        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        int K;
        cin >> K;
        Solution obj;
        cout << obj.removeKdigits(S, K) << endl;
    }
    return 0;
}

// } Driver Code Ends