//Leetcode 118. Pascal's Triangle

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascal;
        
        for (int i = 0; i < numRows; i++){
            vector<int> row;
            pascal.push_back(row);
            
            for (int j = 0; j < i+1; j++){
                if (j == 0 || j == i){
                    pascal[i].push_back(1);
                } else {
                    pascal[i].push_back(pascal[i-1][j-1] + pascal[i-1][j]);
                }
            }
        }
        
        return pascal;
    }
};

/*

0       [1]
1     [1,2,1]
2    [1,3,3,1]
3   [1,4,6,4,1]

We're going to iterate until we reach numRows, adding a new row each time

During that iteration, we will loop and add the elements to the row

j represents the index of the respective row --> if j == 0 or i, this means that we're at the beginning/end of the row
    - in this case, we'll add 1 (because pascal triangle's edges always are 1)
if j isn't 0 or i, we would add the sum of the two elements above
    - pascal[i-1][j-1] is the first element above and pascal[i-1][j] is the second element above

Example using Triangle Diagram:
    - Lets say we wanted to know how to get the two 3's in the third row: [1,3,3,1]
    pascal[i].push_back(pascal[i-1][j-1] + pascal[i-1][j]);     <-- i is 2 in this case (index 2)
    pascal[2].push_back(pascal[2-1][1-1] + pascal[2-1][1]);     <-- j is 1 (iterates from 0 to 3 (row length is i + 1 since i starts at 0))
    pascal[2].push_back(pascal[1][0] + pascal[1][1]);               ^ in this case, we will only be adding elements where j is 1 and 2, since 0 and 3 we add 1
                        ^ 1             ^ 2     <-- 1 + 2 = 3

    pascal[i].push_back(pascal[i-1][j-1] + pascal[i-1][j]);     <-- i is still 2 in this case, since we're still iterating thru the j loop
    pascal[2].push_back(pascal[2-1][2-1] + pascal[2-1][2]);     <-- j is now 2
    pascal[2].push_back(pascal[1][1] + pascal[1][2]);
                        ^ 2             ^ 1     <-- 2 + 1 = 3
    
This is how we get the 3,3 from [1,3,3,1]

*/