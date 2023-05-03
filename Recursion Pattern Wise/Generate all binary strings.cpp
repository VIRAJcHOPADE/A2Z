//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
     void solve(int num, string str){
        if(num==0){
            cout<<str<<" ";
            return ;
        }
            
        solve(num-1,str+'0');
        if(str.back()!='1')
            solve(num-1,str +'1');
    }
    void generateBinaryStrings(int num){
        //Write your code
        solve(num,"");
    }
};

//{ Driver Code Starts.
int main(){
    int t = 1;
    cin >> t;


    while(t--){
        //Input
        int n; cin >> n;

        Solution obj;
        obj.generateBinaryStrings(n);
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends