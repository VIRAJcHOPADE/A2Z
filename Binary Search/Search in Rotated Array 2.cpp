//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool Search(int N, vector<int>& A, int Key) {
        // Code here
        int l=0;
        int h=N-1;
        
        while(l<=h){
            
            int mid=l+(h-l)/2;
            
            if(A[mid]==Key){
                return 1;
            }
            else if(A[l]==A[mid]){l++; mid++;}
            else if(A[mid]>A[l]){
                if(Key<=A[mid] and Key>=A[l]){
                    h=mid-1;
                }
                else{
                    l=mid+1;
                }
            }
            else{
                if(Key>=A[mid] and Key<=A[h]){
                    l=mid+1;
                }
                else{
                    h=mid-1;
                }
            }
        }
        return 0;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        int key;
        cin >> key;

        Solution obj;
        cout << obj.Search(n, a, key) << "\n";
    }
    return 0;
}
// } Driver Code Ends