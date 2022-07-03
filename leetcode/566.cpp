//Leetcode 566. Reshape the Matrix (Easy)

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>> newMat(r, vector<int> (c));
        int nR = 0, nC = 0;
        
        if (mat.size() * mat[0].size() != r*c){
            return mat;
        } else {
            for (int i = 0; i < mat.size(); i++){
                for (int j = 0; j < mat[0].size(); j++){
                    if(nC == c){
                        nC = 0;
                        nR++;
                    }
                    newMat[nR][nC] = mat[i][j];
                    nC++;
                }
            }
        }
        return newMat;
    }
};

/*

Create a new 2d vector with dimensions r and c, provided as parameters

initialize two integers serving as indexes for this new 2d vector as 0

if the product of r * c does not equal the product of the rows * columns for the original matrix, that means
that reshaping is not possible/legal
    - if this is the case, we will return the original matrix

otherwise, we will loop through the original matrix values
    - using the two indexes we intialized (nR and nC), we will add the values from the original matrix to the
    new matrix. 
        - if the variable nC = c, that means we reached the end of the columns for the new matrix, which is why we reset it to 0
        and increment nR (which is the row index);

*/