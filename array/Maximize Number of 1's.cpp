//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
public:
    // m is maximum of number zeroes allowed to flip
    // n is size of array
    int findZeroes(int arr[], int n, int m) {
        // code here
        // code here
        int ans=0,curr=0,zeroes=0,l=0,r=0;
        while(r<n)
        {
            if(arr[r]==0)
            {
                if(zeroes<m) zeroes++,curr++;
                else {
                    while(arr[l++]){ 
                        curr--;
                    }
                }
            }
            else {
                curr++;
            }
            ans=max(ans,curr);
            r++;
        }
        return ans;
    }  
   
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i, m;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> m;
        Solution ob;
        auto ans = ob.findZeroes(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends