class Solution {
public:
    int maximumLengthSubstring(string s) {
        vector<int> v(26,0);int n =s.size();int ans=INT_MIN;
        int right , left=0;
        for (right=0; right<n;right++){
            v[s[right]-'a']++;
            while(v[s[right]-'a']>2){
                v[s[left]-'a']--;
                left++;
            }
            ans=max(ans,right-left+1);
        }
        return ans ;
    }
};