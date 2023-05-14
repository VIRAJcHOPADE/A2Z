// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

int diffSum(int n,int m,int arr[]);

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int arr[n];
        for(int i = 0;i<n;i++)cin>>arr[i];
        cout<<diffSum(n,m,arr);
        if(t)cout<<endl;
    }
}

 // } Driver Code Ends
//User function Template for C++

int diffSum(int n,int m,int arr[])
{
    //write your code here
    int max=0;
    int min =0;
    sort(arr,arr+n);
    
    for(int i=0;i<m;i++){
        min +=arr[i];
    }
    for(int i=n-1;i>=(n-m);i--){
        max +=arr[i];
    }
    return (max-min);
    
    
}

// { Driver Code Starts.
  // } Driver Code Ends