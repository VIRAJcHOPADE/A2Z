//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int findMin(int arr[], int n){
        //complete the function here
        if(arr[0]<=arr[n-1]) return arr[0];
        int s=0;
        int e=n-1;
        int mid=s+(e-s)/2;
        int min=0;
        while(s<e){
            if(arr[0]<=arr[mid]){
                s=mid+1;
                min=s;
            }
            else{
                e=mid;
                min=e;
            }
            mid=s+(e-s)/2;
        }
        return arr[min];
    }
};

//{ Driver Code Starts.


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution ob;
		cout<<ob.findMin(a, n)<<endl;
	}
	return 0;
}
// } Driver Code Ends