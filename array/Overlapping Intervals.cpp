//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
         // Code here
         vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end());
        int a = intervals[0][0], b = intervals[0][1], n = intervals.size();
        for(int i=1;i<n;i++){
            if(intervals[i][0] > b){
                ans.push_back({a,b});
                a = intervals[i][0];
                b = intervals[i][1];
            }
            else b = max(b, intervals[i][1]);
        }
        ans.push_back({a,b});
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>Intervals(n);
		for(int i = 0; i < n; i++){
			int x, y;
			cin >> x >> y;
			Intervals[i].push_back(x);
			Intervals[i].push_back(y);
		}
		Solution obj;
		vector<vector<int>> ans = obj.overlappedInterval(Intervals);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends