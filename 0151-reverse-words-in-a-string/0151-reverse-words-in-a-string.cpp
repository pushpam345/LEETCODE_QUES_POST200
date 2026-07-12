class Solution {
public:
    string reverseWords(string s) {
        // bhai mera approach  ye hai ki tu phle initial aur trailing whitespaces ignore krke ek string ki range nikal jispe kaam krna h mje , then from end start adding words into other string ;
        int n = s.size();
        string ans="";
        for (int i =n- 1; i>=0; i--){
            string word="";
            while(i>=0 && s[i]!=' '){
                word=s[i]+word;
                i--;
            }
            if(word.size()>=1){
                ans+=(" "+word);
            }
        }
        return ans.substr(1);
        
    }
};