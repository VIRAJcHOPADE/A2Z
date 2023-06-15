//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


// } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
   static bool cmp(Item& a, Item& b){
        return (double)a.value / a.weight > (double)b.value / b.weight;
    }
    
    public:

    double fractionalKnapsack(int W, Item arr[], int n)
    {
        sort(arr, arr + n, &cmp);
        double ans = 0;
        for(int i = 0 ; i < n; i++){
            if(arr[i].weight > W) {
                ans += W * ((double)arr[i].value / arr[i].weight);
                break;
            }
            ans += arr[i].value;
            W -= arr[i].weight;
        }
        return ans;
    }
        
};


//{ Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}
// } Driver Code Ends