#include <bits/stdc++.h>
using namespace std;


int main () {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        if(log2(n) < k)
        {
            cout << n + 1 << endl;
        }
        else{
            cout << (int)pow(2 , k) << endl;
        }
    }
}