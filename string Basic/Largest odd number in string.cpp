//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string maxOdd(string s) {
        // your code here
         int i,j;
        string max="";
        for(i=s.length()-1;i>=0;i--)
        {
                int number=(s[i]-48);
                if(number%2!=0)
                {
                    max=s.substr(0,i+1);
                    break;
                }
        }
        return max;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;

        cout << ob.maxOdd(s) << endl;
    }
}

// } Driver Code Ends