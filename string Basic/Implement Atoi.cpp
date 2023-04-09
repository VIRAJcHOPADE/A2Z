//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
        //Your code here
        int sum=0, start=0;
        if(str[0]=='-'){
            start=1;
        }
        
        for(int i=start; i<str.size(); i++){
            if(str[i]>='0' && str[i]<='9'){
                char c=str[i];
                int digit=c-'0';
                sum=sum*10+digit;
            }
            else{
                return -1;
            }
        }
        
        if(str[0]=='-'){
            return -sum;
        }
        return sum;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends