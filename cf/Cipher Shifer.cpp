#include <iostream>
#include <string>

using namespace std;

void decryptMessage(const string& encrypted) {
    char decrypted;
    int n = encrypted.length();
    decrypted = encrypted[0];
    cout<<decrypted;
    char pre =  encrypted[0];
  
    for (int i = 1; i < n-1; i += 1) {
       if(encrypted[i] == pre){
           decrypted =encrypted[i+1];
           cout<<decrypted;
           pre = decrypted;
           i++;
       }
    }
    cout<<endl;

   
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string encrypted;
        cin >> encrypted;

        decryptMessage(encrypted);
        
    }

    return 0;
}
