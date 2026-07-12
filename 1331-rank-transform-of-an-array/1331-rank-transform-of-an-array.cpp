class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> v=arr;
        sort(v.begin(), v.end());
        int r=1;
        unordered_map<int,int> m;
        for( auto x: v){
            if(m[x]==0){
                m[x]=r;
                r++;
            }

        }
        for( int i =0 ; i< arr.size(); i++){
            arr[i]=m[arr[i]];
        }
        return arr;
    
        
    }
};