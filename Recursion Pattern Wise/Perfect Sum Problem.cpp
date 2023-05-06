//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int perfectSum(int arr[], int n, int sum)
	{
        // Your code goes here
        int m = 1e9 + 7;
        int t[n+1][sum+1];
        
        //intialization
        for(int i = 0;i<=n;i++){
            for(int j = 0;j<=sum;j++){
                if(i==0){
                    t[i][j] = 0;
                }
                if(j==0){
                    t[i][j] = 1;
                }
            }
        }
        for(int i = 1;i<=n;i++){
            for(int j = 0;j<=sum;j++){
                if(arr[i-1]<=j){
                    t[i][j] = (t[i-1][j-arr[i-1]] % m) + (t[i-1][j] % m) ;
                }
                else{
                    t[i][j] = t[i-1][j]%m ;
                }
            }
        }
        return t[n][sum] % m;
	}
	
	  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends