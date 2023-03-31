//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
        // code here 
        
        string s1="",s2="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='.'){
                s2="."+s1+s2;
                s1="";
            }
            else{
                s1=s1+s[i];
            }
        }
        
    s2=s1+s2;
    return s2;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends