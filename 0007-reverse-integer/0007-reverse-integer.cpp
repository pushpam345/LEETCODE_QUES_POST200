class Solution {
public:
    int reverse(int x) {
       int sign=1;
       if(x<0)sign=-1;
       long long y=x;
       y=abs(y);
       string c=to_string(y);
       std::reverse(c.begin(), c.end());
        long long a = stoll(c);

        a *= sign;

        if (a > INT_MAX || a < INT_MIN)
            return 0;

        return (int)a;
    }
};