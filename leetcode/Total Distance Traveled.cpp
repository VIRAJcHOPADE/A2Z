class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        
        
        int ans = 0; 
        int Tank = 1;  
        
        while(Tank <= mainTank){
            ans += 10; 
            if (Tank % 5 == 0 && additionalTank > 0) {
                mainTank++;  
                additionalTank-=1;  
            }
            
            Tank++;  
        }
        
        return ans;  
    }
};