class Solution {
public:
    string smallestString(string s) {
       int n = s.length();
    int left = 0;

    
    while (left < n && s[left] == 'a') {
        left++;
    }
    
  
    if (left == n) {
        s[n - 1] = 'z';
    }
    else {
        
        for (int i = left; i < n; i++) {
            if (s[i] != 'a') {
                s[i] = s[i] - 1;
            }
            else {
                break;  
            }
        }
    }

    return s;
    }
};