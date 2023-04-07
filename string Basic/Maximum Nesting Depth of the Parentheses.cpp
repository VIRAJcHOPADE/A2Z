//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int maxDepth(string s) {
        // code here
         stack<char> st;
        int sizee = s.size();
        vector<int> max;
        int cnt=0;
        for(int i=0; i<sizee; i++){
            if(s[i] =='(' && st.size() == 0){
                st.push('(');
                cnt++;
            }
            else if(s[i] =='(' && st.top() == '('){
                st.push('(');
                cnt++;
            }
            else if(s[i] == ')' && st.top() == '('){
                max.push_back(cnt);
                st.pop();
                cnt--;
            }
        }
        
        int ans = *max_element(max.begin(), max.end());
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution obj;
        int ans = obj.maxDepth(s);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends