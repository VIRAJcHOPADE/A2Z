//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> v, long long n, long long x){
        
        // Your code here
          int start =0;
        int end = n-1;
        int ans=0;
        while(start<=end){
         
         int mid =  start + (end - start) / 2; // to prevent from overflow
         
         if(x == v[mid]){
             return mid;
         }
         else if(x < v[mid]){
             end = mid-1;
         }
         else if(x > v[mid]){
             ans = mid;
             start = mid+1;
         }
        }
        if(ans){
            return ans;
        }
        
        return -1;
        
    }
};


//{ Driver Code Starts.

int main() {
	
	long long t;
	cin >> t;
	
	while(t--){
	    long long n;
	    cin >> n;
	    long long x;
	    cin >> x;
	    
	    vector<long long> v;
	    
	    for(long long i = 0;i<n;i++){
	        long long temp;
	        cin >> temp;
	        v.push_back(temp);
	    }
	    Solution obj;
	    cout << obj.findFloor(v, n, x) << endl;
	   
	}
	
	return 0;
}
// } Driver Code Ends