//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        // Your code goes here  // Your code goes here
        int n=arr.size();
        sort(arr.begin(),arr.end());
        vector<vector<int>> ans;
        set<vector<int>> st;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int target=k-arr[i]-arr[j];
                int front=j+1,back=n-1;
                while(front<back){
                    int sum=arr[front]+arr[back];
                    if(sum<target)front++;
                    else if(sum>target)back--;
                    else{
                        vector<int>temp;
                        temp.push_back(arr[i]);
                        temp.push_back(arr[j]);
                        temp.push_back(arr[front]);
                        temp.push_back(arr[back]);
                        ans.push_back(temp);
                        //front++;back--;
                        while(front<back&&arr[front]==temp[2])front++;
                        while(front<back&&arr[back]==temp[3])back--;
                    }
                }
               while(j<n-1&&arr[j]==arr[j+1])j++;
            }
           while(i<n-1&&arr[i]==arr[i+1])i++;
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends