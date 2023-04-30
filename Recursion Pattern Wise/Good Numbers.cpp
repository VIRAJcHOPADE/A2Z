//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
  public:
  bool isValid(int n,int D)
  {
    //   n=i;
    int dig;
    int s=0;
            dig=n%10;
            // n=i;
            s=dig;
            if(dig==D)
            {
             return false;   
            
            }
            n=n/10;
            while(n)
            {
                dig=n%10;
                if(dig==D || dig<=s)
                {
                 return false;   
                break;
                }
                else
                {
                    s=s+dig;
                    n=n/10;
                }
            }
            return true;
            // vec.push_back(i);
  }
    vector<int> goodNumbers(int L, int R, int D) {
        // code here
        int n,s=0,dig,i;
        vector<int>vec;
        bool flag=true;
        for(int i=L;i<=R;i++)
        {
           
            if (isValid(i,D))
            {
                vec.push_back(i);
            }
        }
    
        
    return vec;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int L, R, D;
        cin >> L >> R >> D;
        Solution ob;
        vector<int> ans = ob.goodNumbers(L, R, D);
        for (auto u : ans) cout << u << " ";
        cout << "\n";
    }
}
// } Driver Code Ends