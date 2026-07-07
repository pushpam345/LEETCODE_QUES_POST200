class Solution {
public:
    long long sumAndMultiply(int n) {
        long long ans=0 ;
        int pow=1;long long sum =0;int rem;
        while(n){
            rem=n%10;
            sum+=rem;
            if(rem!=0){
                ans+=(rem*pow);
                pow*=10;
            }
            n/=10;            
        }
        return ans*sum;
        
    }
};