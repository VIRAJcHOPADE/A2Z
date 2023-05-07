//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
    unordered_set<size_t> s;
    bool isDone(size_t sz)
    {
        if(s.count(sz))
            return true;
        s.insert(sz);
        return false;
    }
    void getCombination(vector<int>& nums, int sum, vector<int> curr, vector<vector<int> >& res)
    {
        if(sum == 0)
        {
            res.push_back(curr);
            return;
        }
        for(auto n:nums)
        {
            if(sum >= n && (curr.empty() || curr.back() <= n))
            {
                vector<int> temp =curr;
                temp.push_back(n);
                getCombination(nums, sum - n,temp,res);
            }
            else if(sum<n)
                break;
        }
        return;
    }
    vector<vector<int> > combinationSum(vector<int> &A, int B) {
        sort(A.begin(), A.end());
        auto it = unique(A.begin(), A.end());
        A.resize(std::distance(A.begin(), it));
    
        vector<vector<int> > res;
        vector<int> temp;
        getCombination(A, B, temp, res);
        return res;
        
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            A.push_back(x);
        }   
        int sum;
        cin>>sum;
        Solution ob;
        vector<vector<int>> result = ob.combinationSum(A, sum);
   		if(result.size()==0){
   			cout<<"Empty";
   		}
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}	
// } Driver Code Ends