//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    void MakeZeros(vector<vector<int> >& matrix) {
        // Code here
        int row=matrix.size(),col=matrix[0].size();
        int arr[row][col];
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                arr[i][j]=-1;
            }
        }
        
        int sum=0;
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]==0){
                    
                    if(i+1<row){
                       sum+=matrix[i+1][j];
                       arr[i+1][j]=0;
                    }
                    
                    if(i-1>=0){
                        sum+=matrix[i-1][j];
                        arr[i-1][j]=0;
                    }
                    
                    if(j+1<col){
                        sum+=matrix[i][j+1];
                        arr[i][j+1]=0;
                    }
                    
                    if(j-1>=0){
                        sum+=matrix[i][j-1];
                        arr[i][j-1]=0;
                    }
                    
                    arr[i][j]=sum;
                    sum=0;
                }
            }
        }
        
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(arr[i][j]==-1){
                    continue;
                }
                
                else {
                    matrix[i][j]=arr[i][j];
                }
                
            }
        }
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>> matrix(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		ob.MakeZeros(matrix);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cout << matrix[i][j] <<" ";
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends