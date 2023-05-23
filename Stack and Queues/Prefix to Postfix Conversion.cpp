//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string preToPost(string pre_exp) {
    int n = pre_exp.length();
    stack<string> st;
    
    for(int i=n-1; i>=0; i--){
        
        char ch =  pre_exp[i];
        
        if(ch>='a' && ch<='z' || ch>='A' && ch <='Z' || ch>='0' && ch<='9'){
            st.push(string(1,ch));
        }
        else{
            string s1 = st.top();
            st.pop();
            string s2 = st.top();
            st.pop();
            string ans = s1 + s2 + ch;
            st.push(ans);
        }
    }
    return st.top();
}
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        string prefix;
        cin >> prefix;

        Solution obj;
        cout << obj.preToPost(prefix) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}

// } Driver Code Ends