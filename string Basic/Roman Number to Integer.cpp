// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution {
  public:
    int romanToDecimal(string &str) {
        // code hereint sum=0;
        int sum=0;
        int n=str.size();
       unordered_map<char,int> mp;
       mp['I']=1;
       mp['V']=5;
       mp['X']=10;
       mp['L']=50;
       mp['C']=100;
       mp['D']=500;
       mp['M']=1000;
        for(int i=0;i<n;i++){
           if(i+1<n && mp[str[i]]<mp[str[i+1]]){
               sum+=mp[str[i+1]]-mp[str[i]];
               i+=1;  /// as we are taking two elements i && i+1
           }
           else {
               sum+=mp[str[i]];
           }
        }
        return sum;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}  // } Driver Code Ends