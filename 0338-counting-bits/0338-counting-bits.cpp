class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> v(n+1);
        for(int i =0 ; i<=n; i++){
            v[i]=v[i>>1]+ (i&1);
        }
        return v;
    }
};
/*0 1 1 2 1 2 2 3 1 2  2  3  2  3  3  4
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16*/