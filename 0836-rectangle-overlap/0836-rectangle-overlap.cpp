class Solution {
public:
    bool isRectangleOverlap(vector<int>& r1, vector<int>& r2) {
        if(r1==r2)return 1;
        int a=r1[0],b=r1[1],c=r1[2],d=r1[3];
        int p=r2[0],q=r2[1],r=r2[2],s=r2[3];
        // if(((a>p && a<r) || (b>q && b<s))|| ((c>p && c<r) || (d>q && d<s)))return true ;
        // if(((p>a && p<c) || (q>b && q<d))|| ((r>a && r<c) || (r>b && s<d)))return true ;
        // return false;
        if(a<r && p<c && b<s && q<d)return 1;
        return 0;
    }
};