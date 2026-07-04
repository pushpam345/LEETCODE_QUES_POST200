class Solution {
public:
    int subtractProductAndSum(int n) {
        int product=1,sum=0,r;
        while(n){
           r=n%10;
           sum+=r;
           product*=r;
           n/=10; 
        }
        return (product-sum);

        
    }
};