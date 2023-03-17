//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int findSubArraySum(int Arr[], int N, int k)
    {
        // code here
         // code here
        int pref = 0;
        int ans = 0;
        
        unordered_map<int, int> m;
        for(int i = 0; i < N; i++)
        {
            pref += Arr[i];
            if(pref == k) ans++;
            // cout<<pref<<" ";       // 10 12 10 -10 0
            int need = pref - k;
            // cout<<need<<" ";  // 20 22 20 0 10 
            ans += m[need];
            // cout<<m[need]<<" ";  //  0  0  0  0  2
            // cout<<ans<<" ";      //  0  0  0  1  3
            m[pref]++;              //10:2 ,22:1 , -10:1 ,0:1
        }
        return ans;
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
        int Arr[N];
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int k;
        cin>>k;
        Solution obj;
        cout<<obj.findSubArraySum(Arr, N, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends