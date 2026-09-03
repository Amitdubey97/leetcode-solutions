class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        //Checking Rows and Coln
        for(int i=0; i<9; i++){
            vector<int> v1(11,0);
            vector<int> v2(10,0);
            for(int j=0; j<9; j++){
                if(isdigit(board[i][j])){
                    v1[ board[i][j]-'0' ]++;
                    if(v1[ board[i][j]-'0' ]>1) return false;
                }
                if(isdigit(board[j][i])){
                    v2[ board[j][i]-'0' ]++;
                    if(v2[ board[j][i]-'0' ]>1) return false;
                }
            }
        }

        // Checking each 3x3 sub matrix
        for(int x=0; x<9; x+=3){
            for(int y=0; y<9; y+=3){
                vector<int> v(10,0);
                for(int i=x; i<x+3; i++){
                    for(int j=y; j<y+3; j++){
                        if(isdigit(board[i][j])){
                            v[ board[i][j]-'0' ]++;
                            if(v[ board[i][j]-'0' ]>1) return false;
                        }
                    }
                }
            }
        }

        return true;

    }
};