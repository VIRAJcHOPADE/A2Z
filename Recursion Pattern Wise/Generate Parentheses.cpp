//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
vector<string> AllParenthesis(int n) ;


// } Driver Code Ends
//User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution
{
   public:
    void helper(int n, int open, int close, vector<string> &v, string s)
    {
        if(open == n && close ==n)
        {
            v.push_back(s);
            return;
        }
        if(open<n)
        {
            helper(n,open+1,close,v,s+"(");
        }
        if(close<open)
        {
           helper(n,open,close+1,v,s+")"); 
        }
    }
    vector<string> AllParenthesis(int n) 
    {
        vector<string> v;
        int open =0, close =0;
        helper(n,open,close,v,"");
        return v;
    }
};

//{ Driver Code Starts.


int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Solution ob;
		vector<string> result = ob.AllParenthesis(n); 
		sort(result.begin(),result.end());
		for (int i = 0; i < result.size(); ++i)
			cout<<result[i]<<"\n";
	}
	return 0; 
} 

// } Driver Code Ends