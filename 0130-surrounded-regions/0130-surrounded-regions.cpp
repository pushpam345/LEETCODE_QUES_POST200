class Solution {
public:
    void f(vector<vector<char>>& board, int i , int j ){
        if (i<0 || j<0 || i>=board.size() || j>=board[0].size())return ;
        if(board[i][j]=='X')return ;
        // if(i==0 || j==0 || i==board.size()-1 || j==board[0].size()-1 ){
            if(board[i][j]=='O'){
                board[i][j]='Y';
                f(board, i+1,j);f(board, i-1,j);f(board,i,j+1);f(board, i,j-1);
            }
        // }
        


        

    }
    void solve(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();
        // for(int i =0 ; i<n; i++){
        //     for(int j =0 ; j<m ; j++){
        //         if(board[i][j]=='O' &&(i==0 || j==0 || i==n-1 || j==m-1)){
        //             f(board,i,j);
        //         }
                
        //     }
        // }
        for( int i =0 ; i<n ; i++){
            if(board[i][0]=='O')f(board,i,0);
            if(board[i][m-1]=='O')f(board, i , m-1);
        }
        for( int i =0 ; i<m ; i++){
            if(board[0][i]=='O')f(board,0,i);
            if(board[n-1][i]=='O')f(board, n-1 , i);
        }
        for(int i =0 ; i<n; i++){
            for(int j =0 ; j<m ; j++){
                if(board[i][j]=='O'){
                    board[i][j]='X';
                }
                else if (board[i][j]=='Y'){
                    board[i][j]='O';
                }
                
            }
        }
        
        
    }
};