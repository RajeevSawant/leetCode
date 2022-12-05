/*
 Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:

Integers in each row are sorted from left to right.
The first integer of each row is greater than the last integer of the previous row.
 *
 */

    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int rows = matrix.size();
        int cols = matrix[0].size();

        int row = 0, col = cols - 1;

        while(row < rows && col > -1){
            int curr = matrix[row][col];

            if (curr == target){
                return true;
            }

            if(target > curr){
                row++;
            }else{
                col--;
            }
        }

        return false;
    }
