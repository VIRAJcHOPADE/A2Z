//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        vector<int> ans;
        int count[1000000]={0};
        // int i=0;
        // int j=0;
        // while(i<n && j<m){
        //     if(arr1[i]== arr2[j]){
        //         ans.push_back(arr1[i]);
        //         i++;
        //         j++;
        //     }
        //     else if(arr1[i]>arr2[j]){
        //         j++;
        //     }
        //     else{
        //         i++;
        //     }
        // }
        for(int i=0;i<n;i++){
            count[arr1[i]]++;
        }
        for(int i=0;i<m;i++){
            count[arr2[i]]++;
        }
        for(int i=0;i<100000;i++){
            if(count[i]>0){
               ans.push_back(i); 
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends