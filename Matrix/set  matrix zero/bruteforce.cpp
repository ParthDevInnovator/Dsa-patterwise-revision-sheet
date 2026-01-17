class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        {/*Step 1: Input and Initialize Auxiliary Matrix
        Start by taking the input matrix.
        Create an auxiliary matrix ( marks ) of the same size as the input matrix.
        Initialize all elements in marks as False.*/}
        int m =matrix.size();
        int n =matrix[0].size();
         vector<bool> row(m,false);
         vector<bool>col(n,false);
         {/*Step 2: Traverse the Input Matrix to Mark Positions
        Loop through each element in the input matrix.
        Whenever you encounter a 0 at position (i, j), update marks[i][j] to True.*/}
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    row[i]=true;
                    col[j]=true;
                }
            }
        }
        {/*Step 3: Update the Original Matrix Using the Marks
Loop through the matrix again. For each element (i, j):
If marks[i][k] for any column k in the same row or marks[l][j] for any row l in the same column is True, set matrix[i][j] = 0.
Step 4: Return the Updated Matrix
After modifying the matrix, return the output.*/}
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    if(row[i]|| col[j]){
                        matrix[i][j]=0;
                    }
                }
            }
    }
};