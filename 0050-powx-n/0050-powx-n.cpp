class Solution {
public:
    double f(double x, long long n){
        if(n==0)return 1;
        if(n==1)return x;
        if(n%2==0)return f(x*x,n/2);
        return x*f(x,n-1);
    }
    double myPow(double x, int n) {
        long long temp=n;
        if(n<0){
            x=1/x;
            temp=(-1*1LL*n);
        }return f(x,temp);
    }
};