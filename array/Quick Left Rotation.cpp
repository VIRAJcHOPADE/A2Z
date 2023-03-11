//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	
	public:
	void leftRotate(int arr[], int k, int n) 
	{ 
	   //// Your code goes here
	   //k %=n;
	   //while(k>0){
	   //    int temp=arr[0];
	   //    for(int i=0;i<n-1;i++){
	   //        arr[i]=arr[i+1];
	   //    }
	   //    arr[n-1]=temp;
	   //   k--;
	   //}
	   ////for(int i=0;i<n;i++){
	   ////    cout<<arr[i]<<" ";
	   ////}
	    	 k %= n;
	    int temp[k];
	    
	    for (int i = 0; i < k; i++) {
	        temp[i] = arr[i];
	    }
	    
	    for (int i = 0; i < n - k; i++) {
	        arr[i] = arr[i + k];
	    }
	    
	    for (int i = n - k; i < n; i++) {
	        arr[i] = temp[i - n + k];
	    }
	} 

		 

};

//{ Driver Code Starts.

int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
	    cin >> n;
	    int k;
	    cin >> k;
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	        // um[a[i]]++;
	    }


       

        Solution ob;
        ob.leftRotate(a,k,n);
        
        for (int i = 0; i < n; i++) 
        	cout << a[i] << " "; 

	    cout << "\n";
	     
    }
    return 0;
}



// } Driver Code Ends