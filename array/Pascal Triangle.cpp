//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

// } Driver Code Ends
// #define ll long long
class Solution{
public:
    vector<ll> nthRowOfPascalTriangle(int n) {
        // code here
          vector<vector<ll>>res;

        for(int i=0; i<n; i++){
    
            res.push_back(vector<ll>(i+1,1));
    
            for(int j=1; j<i; j++){
    
                res[i][j]=(res[i-1][j]+res[i-1][j-1])%1000000007;
    
            }
    
        }

    return res[n-1];
    }
};


//{ Driver Code Starts.


void printAns(vector<ll> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.nthRowOfPascalTriangle(n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends