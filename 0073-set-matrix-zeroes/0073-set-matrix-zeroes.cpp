class Solution {
public:
    void setZeroes(vector<vector<int>> &matrix) {

        int n = matrix.size();
        int m = matrix[0].size();

        vector<int> row(n,0);// extra row (initialise as zero)
        vector<int> col(m,0);// extra column(initialise as zero)

        for(int i=0;i<n;i++) { // mark 1 in extra row and column if found zero in original matrix
            for(int j=0;j<m;j++) {

                if(matrix[i][j]==0) {
                    row[i]=1;
                    col[j]=1;
                }
            }
        }

        for(int i=0;i<n;i++) {// convert marked (row and col) to zero
            for(int j=0;j<m;j++) {

                if(row[i] || col[j]) // dono me se jo bhi 1 ho
                    matrix[i][j]=0;
            }
        }
    }
};