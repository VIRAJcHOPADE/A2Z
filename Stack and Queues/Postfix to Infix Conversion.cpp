//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
    bool isOperator(char ch) {
        if(ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^') {
            return true;
        }
        return false;
    }
  public:
    string postToInfix(string exp) {
        // Write your code here
        stack<string> st;
        for(int i = 0; i<exp.size(); ++i) {
            if(isOperator(exp[i])) {
                string s1 = st.top();
                st.pop();
                string s2 = st.top();
                st.pop();
                st.push("(" + s2 + exp[i] + s1 +")");
            }
            else {
                string s = "";
                s += exp[i];
                st.push(s);
            }
        }
        return st.top();
    }
};
// class Solution {
//   public:
//     string postToInfix(string exp) {
//         // Write your code here
//          int n = exp.length();
//         stack<string> st;
        
//         for(int i=0; i<n; i++) {
//             char ch = exp[i];
            
//             if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z' || ch >= '0' && ch <= '9') {
//                 st.push(string(1,ch));
//             } else {
//                 string s1 = st.top();
//                 st.pop();
//                 string s2 = st.top();
//                 st.pop();
//                 string infix = "("+s2 + ch + s1+")";
//                 st.push(infix);
//             }
//         }
//         return st.top();
//     }
// };

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        string postfix;
        cin >> postfix;
        // char marker; cin >> marker;

        Solution obj;
        cout << obj.postToInfix(postfix) << endl;

        // cout << "~\n";
    }
    fclose(stdout);

    return 0;
}

// } Driver Code Ends