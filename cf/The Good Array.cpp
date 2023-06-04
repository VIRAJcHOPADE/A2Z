#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        
        int ans = n;
        
        for(int i=0;i<=n;i++){
          int l = (i+k-2)/k;
          int r = (n-i+k-1)/k;
          ans = min(ans,l+r);
        }
        
        cout<< ans+1<<endl;
       
    }

    return 0;
}
