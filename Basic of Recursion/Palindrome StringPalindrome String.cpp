//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	   
	     for (int i = 0; i < S.length() / 2; i++) {
 
        if (S[i] != S[S.length() - i - 1]) {
            
            return 0;
        }
    }
    
    return 1;
	}

};

//{ Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends


// leetcode

// is valid palindrome

// bool isPalindrome(string s) {
//         s = removeNoise(s);
//         for(int i=0; i<s.size()/2; i++){
//             if (s[i]!= s[s.size()-i-1]){
//                 return false;
//             }
//         }
//         return true;
//     }
    
//     string removeNoise(string& s){
//         string d;
//         for(int i=0; i<s.size(); i++){
//             if(::isalpha(s[i]) || ::isdigit(s[i])){
//                 d.push_back(::tolower(s[i]));
//             }
//         }
//         return d;
//     }