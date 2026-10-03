class Solution {
public:
    int hammingDistance(int x, int y) {
        int c=x^y;
        int ans=0;
        while(c){
            ans+=(c%2);
            c/=2;
        }
        return ans ;
    }
};