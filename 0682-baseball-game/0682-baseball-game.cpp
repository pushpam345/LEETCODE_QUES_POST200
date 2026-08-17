class Solution {
public:
    int calPoints(vector<string>& nums) {
       vector<int> v;
       for(auto x:nums){
        int a=v.size();
        if(x=="+"){
            
            v.push_back(v[a-1]+v[a-2]);
        }
        else if(x=="C"){
            v.pop_back();
        }
        else if(x=="D"){
            v.push_back(v[a-1]*2);
        }
        else{
            v.push_back(stoi(x));
        }

       } 
       return accumulate(v.begin(),v.end(),0);  
    }
};