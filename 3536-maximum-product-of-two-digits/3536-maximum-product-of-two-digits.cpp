class Solution {
public:
    int maxProduct(int n) {
        int large=-1,slarge=-1;
        while(n){
            int r=n%10;
            if(r>=large){
                slarge=large;
                large=r;
                // continue;
            }
            if(r>slarge && r<large){
                slarge=r;
            }
            
            n/=10;
        }
        return large * slarge ;
    }
};