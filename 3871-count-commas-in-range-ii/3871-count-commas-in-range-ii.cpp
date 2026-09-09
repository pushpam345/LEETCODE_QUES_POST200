class Solution {
public:
    long long countCommas( long long n) {
        unsigned long long  a=999,ans=0;
        long long b=n-999;
        while(b>=0){

           
           ans+=(max(0LL,b));
           a=a*1000+999;
           b=n-a;
        }
        return ans;
    }
};