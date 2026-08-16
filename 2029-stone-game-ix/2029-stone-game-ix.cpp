class Solution {
public:
    bool stoneGameIX(vector<int>& stones) {
        int x=0,y=0,z=0;
        for(auto t: stones){
            if(t%3==0){
                x++;
            }
            if(t%3==1){
                y++;
            }
            if(t%3==2){
                z++;
            }
        }
        if (x % 2 == 0) {
            return y>0  && z > 0;
        }
        return abs(y-z)>2;
    }
};