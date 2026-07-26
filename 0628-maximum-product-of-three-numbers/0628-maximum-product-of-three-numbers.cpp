class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int a=-1001, b=-1001, c=-1001;
        int d=1001, e=1001;

        for(auto x: nums){
            if(x>a && x>b && x>c){
                swap(a,b);
                swap(a,c);
                a=x;
            }
            else if(x<=a && x>b && x>c){
                swap(b,c);
                b=x;

            }
            else if (x<=b && x>c && x<=a){
                c=x;
            }
            if(x<=e){
                d=e;
                e=x;
            }
            else if (x>e && x<d){
                d=x;
            }
        }
        return max(a*b*c, a*d*e);
    }
};