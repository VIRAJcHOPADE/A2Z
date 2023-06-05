//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        // Your code here
        stack<int>st;
        long long res = 0;
        int tp;
        long long curr;
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && arr[st.top()]>=arr[i])
            {
                tp = st.top();
                st.pop();
                curr = arr[tp]*((st.empty())?(i):(i-st.top()-1));
                res = max(res,curr);
            }
            st.push(i);
        }
        while(!st.empty())
        {
            tp = st.top();
            st.pop();
            curr = arr[tp]*((st.empty())?(n):(n-st.top()-1));
            res = max(curr,res);
        }
        return res;
    }
};


//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}

