//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        // arr 3 5 2 2 1
        // sort(arr,arr+n);
        //  int *ans=new int[2];
        
        // int i =0 ;
        // int B ,A;
        // while(i < n){
        //     if(arr[i]==-1){
        //         i++;
        //         continue;
        //     }
        //     else if(arr[i]==i+1){
        //         i++;
        //         continue;
        //     }else if(arr[i]==arr[arr[i]-1]){
                
        //         //Duplicate Number
        //         arr[arr[i]-1]=-1;    
        //       B = arr[i];
        //         i++;
                
        //     }else if( arr[i]!=i+1 || arr[i]!= arr[arr[i]-1]){
                
        //         //Swap Numbers if not in current position
        //         i++;
        //       swap(arr[i] , arr[arr[i]-1]);
        //     }
        // }
        
        // for(int i =0 ; i  < n ; i ++){
        //     if(arr[i]==-1){
        //         A = i;
        //     }
        // }
        // ans[0]=B;
        // ans[1]=A;
        // return ans;
     int i = 0;
        int *ans = new int[2];
        int rep;
        int miss;
        while(i<n){
            if(arr[i] != arr[arr[i]-1]){
                swap (arr[i],arr[arr[i]-1]);
            }
            else{
                i++;
            }
        }
        for(int i =0 ;i<n;i++){
            if(arr[i] != i+1){
                miss = i+1;
                rep = arr[i];
            }
        }
        ans[0] = rep;
        ans[1] = miss;
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends