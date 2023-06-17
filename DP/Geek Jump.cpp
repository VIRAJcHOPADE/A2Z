//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  vector<int>dp;
    int fun(int ind,vector<int> &h, int n)
    {
        if(ind == n-2){
            return abs(h[ind+1]-h[ind]);
        }
        if(ind == n-1)return 0;
        if( dp[ind] != -1)return dp[ind];
        return dp[ind] = min( 
            abs(h[ind+1]-h[ind]) + fun(ind+1,h,n) ,
            abs(h[ind+2]-h[ind]) + fun(ind+2,h,n)
        );
    }
  
    int minimumEnergy(vector<int>& height, int n) {
        // Code here
        dp.assign(n,-1);
        return fun(0,height,n);
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
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.minimumEnergy(arr, N) << "\n";
    }
    return 0;
}
// } Driver Code Ends