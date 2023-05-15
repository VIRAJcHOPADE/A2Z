//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    int setBit(int N)
    {
        // Write Your Code here
        int ans = 0;
        int ind = 0;
        int x = N;
        while(N!=0){
            if( (N&1) == 0){
                break;
            }
            ind++;
            N=N>>1;
        }
        if(N==0){
            return x;
        }
        x= x ^ (1<<ind);
        return x;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        Solution ob;
        int ans = ob.setBit(N);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends