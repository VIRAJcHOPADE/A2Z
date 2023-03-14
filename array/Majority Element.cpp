//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
        // your code here
        sort(a, a+size);
        int l=(size/2)-1;
        int r=(size/2)+1;
        int count=1;
        while(l>=0)
        {
            if(a[l+1]==a[l]){
                count++;
                l--;
            }
            else break;
        }
        while(r<size)
        {
            if(a[r-1]==a[r])
            {
                count++;
                r++;
            }
            else break;
        }
        if(count>size/2)return a[size/2];
        return -1;
        
        
    }
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}

// } Driver Code Ends