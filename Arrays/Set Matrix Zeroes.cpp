/*
Given a m x n matrix, if an element is 0, set its entire row and column to 0. Do it in place.

Follow up:
Did you use extra space?
A straight forward solution using O(mn) space is probably a bad idea.
A simple improvement uses O(m + n) space, but still not the best solution.
Could you devise a constant space solution?


*/


class Solution {
public:
    void setZeroes(vector<vector<int> > &matrix) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int rows = matrix.size();
        if(rows == 0)
            return;
        int cols = matrix[0].size();
       
         vector<int> vrows;
         vector<int> vcols;
         
         for(int row= 0; row < rows; row++)
         {
             for(int col = 0; col < cols; col++)
             {
                 if(matrix[row][col] == 0)
                 {
                     vrows.push_back(row);
                     vcols.push_back(col);
                 }
             }
         }
         for(int i = 0; i < vrows.size(); i++)
         {
             setZeroRow(matrix, vrows[i]);
         }
         for(int i = 0; i < vcols.size(); i++)
         {
             setZeroCol(matrix, vcols[i]);
         }
    }
    
    void setZeroCol(vector<vector<int> > &matrix, int col)
    {
        int rows = matrix.size();
        for(int i = 0; i < rows; i++)
        {
           matrix[i][col] = 0;
        }
    }
    
    void setZeroRow(vector<vector<int> > &matrix, int row)
    {
        for(int i = 0; i < matrix[0].size(); i++)
        {
            matrix[row][i] = 0;
        }
    }
};