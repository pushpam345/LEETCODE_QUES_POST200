long long M=1e9+7;
class Solution {
public:
    long long f(long long n,long long b, long long ans)
    {
       if(b==0)return ans;
       if(b&1)return f(n,b-1,(ans*n)%M);
       else return f((n*n)%M, b>>1,ans%M);  

    }
    int countGoodNumbers(long long n) {
        long long a=f(20,n/2,1)%M;
        if(n&1) return (5*a)%M;
        return a;
    }
};