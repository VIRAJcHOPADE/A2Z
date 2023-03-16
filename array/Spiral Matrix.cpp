//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int findK(vector<vector<int>> &a, int n, int m, int k)
    {
        // Your code goes here
        int l=0, r=m-1, t=0, d=n-1;
        while (k>0) {
            // if (l>r || t>d) break;
            for (int i=l; i<=r; i++) {
                k--;
                if (k==0) return a[t][i];
            }
            t++;
            // if (l>r || t>d) break;
            for (int i=t; i<=d; i++) {
                k--;
                if (k==0) return a[i][r];
            }
            r--;
            // if (l>r || t>d) break;
            for (int i=r; i>=l; i--) {
                k--;
                if (k==0) return a[d][i];
            }
            d--;
            // if (l>r || t>d) break;
            for (int i=d; i>=t; i--) {
                k--;
                if (k==0) return a[i][l];
            }
            l++;
        }
        return 0;
    }

};

//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        vector<vector<int>> a(n, vector<int>(m, 0));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }

        Solution obj;

        cout<< obj.findK(a, n, m, k) << "\n";
        
       
    }
}
// } Driver Code Endss