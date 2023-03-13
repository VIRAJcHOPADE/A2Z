//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int search(int A[], int N){
	    //code
	    sort(A,A+N);
	    
	    if(N==1){
	        return A[N-1];
	    }
	    int Y=0;
	    int Z=1;
	    if(A[N-2]!=A[N-1] && A[N-2]==A[N-3]){
	        return A[N-1];
	    }
	    while(Y<N-1 && Z<N){
	        if(A[Y]==A[Z]){
	            Y+=2;
	            Z+=2;
	        }
	        else{
	           return A[Y]; 
	        }
	    }
	    
	}
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t,len;
    cin>>t;
    while(t--)
    {
        cin>>len;
        int arr[len];
        for(int i=0;i<len;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.search(arr, len)<<'\n';
    }
    return 0;
}

// } Driver Code Ends