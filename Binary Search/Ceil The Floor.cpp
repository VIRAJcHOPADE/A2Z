//{ Driver Code Starts

#include <bits/stdc++.h>

using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        auto ans = getFloorAndCeil(arr, n, x);
        cout << ans.first << " " << ans.second << "\n";
    }
    return 0;
}

// } Driver Code Ends

int getFloor(int v[],int n,int x)
{
     int start =0;
        int end = n-1;
        int ans=0;
        while(start<=end){
         
         int mid =  start + (end - start) / 2; // to prevent from overflow
         
         if(x == v[mid]){
             return v[mid];
         }
         else if(x < v[mid]){
             end = mid-1;
         }
         else if(x > v[mid]){
             ans = v[mid];
             start = mid+1;
         }
        }
        if(ans){
            return ans;
        }
        
        return -1;
        
}


int getCeil(int v[],int n,int x)
{
    int start =0;
        int end = n-1;
        int ans=0;
        while(start<=end){
         
         int mid =  start + (end - start) / 2; // to prevent from overflow
         
         if(x == v[mid]){
             return v[mid];
         }
         else if(x < v[mid]){
             ans = v[mid];
             end = mid-1;
         }
         else if(x > v[mid]){
             
             start = mid+1;
         }
        }
        if(ans){
            return ans;
        }
        
        return -1;
        
}

pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    // code here
     sort(arr,arr+n);
     
    int f=getFloor(arr,n,x);
    
    int c=getCeil(arr,n,x);
    
    pair<int,int>p{f,c};
    
    return p;
}