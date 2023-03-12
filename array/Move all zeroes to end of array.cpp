//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    
	   // // code here
	   // sort(arr,arr+n);
	   // for(int i=0;i<n;i++){
	   //     if(arr[i]!=0){
	   //        int temp=arr[i];
	   //        arr[i]=arr[n-1-i];
	   //        arr[n-1-i]=temp;
	   //     }
	   // }
	    
	    
	    int j=0,i;
	    for(i=0;i<n;i++)
	    {
	        if(arr[i]!=0)
	        {
	            int temp=arr[i];
	            arr[i]=arr[j];
	            arr[j]=temp;
	            j++;
	        }
	    }
	}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.pushZerosToEnd(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends