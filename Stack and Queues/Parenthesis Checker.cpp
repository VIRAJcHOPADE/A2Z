//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        stack<char> ans;
        
        int n= x.length();
        
        for(int i=0;i<n;i++){
            
            if(x[i]=='{' || x[i]=='[' || x[i]=='('){
                ans.push(x[i]);
            }
            if(ans.empty()){
            return 0;
        }
             if(x[i]==']'){
                 if(ans.top()=='['){
                   ans.pop();
                 }
                 else{
                     return 0;
                 }
            }
             if(x[i]=='}'){
                if(ans.top()=='{'){
                   ans.pop();
                 }
                 else{
                     return 0;
                 }
            }
             if(x[i]==')'){
                if(ans.top()=='('){
                   ans.pop();
                 }
                 else{
                     return 0;
                 }
            }
            
        }
        if(ans.empty()){
            return true;
        }
        else{
            return false;
        }
        
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends