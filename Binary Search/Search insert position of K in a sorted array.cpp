//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int searchInsertK(vector<int>Arr, int N, int k)
    {
        // code here
         int start =0;
        int end = N-1;
        int ans=0;
        if(Arr[0] > k){
            return 0;
        }
        while(start<=end){
         
         int mid =  start + (end - start) / 2; // to prevent from overflow
         
         if(k == Arr[mid]){
             return mid;
         }
         else if(k < Arr[mid]){
             end = mid-1;
         }
         else if(k > Arr[mid]){
             ans = mid+1;
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
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        vector<int>Arr(N);
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int k;
        cin>>k;
        Solution obj;
        cout<<obj.searchInsertK(Arr, N, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends