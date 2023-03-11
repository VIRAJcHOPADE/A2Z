//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	   // sort(arr,arr+n);
	    
	   // int ans=arr[n-1];
	   // for(int i=n-2;i>=0;i--){
	   //     if(ans>arr[i]){
	   //         ans=arr[i];
	   //         break;
	   //     }
	   // }
	   // return ans;
	   int largest=-1;
	    int secondlargest = -1;
	    for(int i=0;i<n;i++){
	        if(arr[i]>largest){
	            secondlargest=largest;
	            largest=arr[i];
	        }
	        if(arr[i]>secondlargest && arr[i]<largest)secondlargest=arr[i];
	        
	    }
	    return secondlargest;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends