class Solution {
public:
    int v[12] ={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int countDaysTogether(string aA, string lA, string aB, string lB) {
        string a= max(aA,aB);
        string b= min(lA,lB);
        cout<<a<<" "<<b<<endl;
        if(b<a)return 0;
        else{
            //p=08 q=16  r=08 s=18
            int p = stoi(a.substr(0, 2)); 
            int q = stoi(a.substr(3, 2)); 
            int r = stoi(b.substr(0, 2)); 
            int s = stoi(b.substr(3, 2));
            cout<<q<<" "<<s<<endl;
            if(p==r)return abs(q-s)+1;
            int ans =0;
            for(int i=p; i<=r;i++){
                if(i==p){
                    ans+=(v[p-1]-q+1);
                }
                else if (i==r){
                    ans+=(s);
                }
                else{
                    ans+=v[i-1];
                }
            }
            return ans ;
        }
    }
};