//{ Driver Code Starts
// Program to find best buying and selling days
#include <bits/stdc++.h>

using namespace std;

// This function finds the buy sell schedule for maximum profit
void stockBuySell(int *, int);

// Driver program to test above functions
int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, i;
        cin >> n;
        int price[n];
        for (i = 0; i < n; i++) cin >> price[i];
        // function call
        stockBuySell(price, n);
    }
    return 0;
}

// } Driver Code Ends


// User function template for C++

// This function finds the buy sell schedule for maximum profit
void stockBuySell(int price[], int n) {
    // code here
    int buyDay = 0;
	int sellDay = 0;
	bool noProfit = 0 ;
	while(sellDay < n - 1 ){
		while((sellDay < n - 1 ) && (price[sellDay + 1] > price[sellDay])){
		    sellDay++;
		}
		
		if(sellDay != buyDay){
		    noProfit = 1 ;
		    cout<<"("<<buyDay<<" "<<sellDay<<") ";
		}
		buyDay = sellDay+1;
		sellDay = buyDay;
	}
	
	if(noProfit == 0){
		cout<<"No Profit";
	}	
	cout<<endl;
}