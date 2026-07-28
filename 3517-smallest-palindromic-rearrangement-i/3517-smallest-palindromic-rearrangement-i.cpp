class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int> v(26, 0);
        for (auto x : s) {
            v[x - 'a']++;
        }
        string c = "";
        for (int i = 0; i < 26; i++) {
            if (v[i] % 2) {
                c += (char)((int)'a'+i);
                v[i]--;
                break;
            }
        }
        // for (int i = 25; i >= 0; i--) {
        //     while (v[i]) {
        //         c += ('a' + i);
        //         c = (char('a' + i) + c);
        //         v[i] -= 2;
        //     }
        // }
        string temp="";
        for(int i=0;i<26;i++){
            temp.append(v[i]/2,(char)((int)'a'+i));
        }
        string nig=temp;reverse(nig.begin(),nig.end());
        if(s.size()%2==0)return temp+nig;
        return temp+c+nig;
        return c;
    }
};