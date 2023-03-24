//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    // code here
	     int v=0;
            int fo=-1;
            int lo=-1;
            for(int i=0;i<n;i++)
            {
                if(arr[i]==x)
                {
                    fo=i;
                    break;
                }
            }
            for(int i=n;i>=0;i--)
            {
                if(arr[i]==x)
                {
                    lo=i;
                    break;
                }
            }
            if(fo==-1 || lo==-1){
                return 0;
            }
         v=lo-fo+1;
    return v;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends