#include <iostream>
using namespace std;
#include <climits>

int getMaxSumRows(int mat[][3], int rows, int cols)
{
    int maxRowSum = INT_MIN;
    for (int i = 0; i < rows; i++)
    {
        int rowSum = 0;
        for (int j = 0; j < cols; j++)
        {
            rowSum += mat[i][j];
        }
        maxRowSum = max(maxRowSum, rowSum);
    }
    return maxRowSum;
}

int getMaxSumCols(int mat[][3], int rows, int cols)
{
    int maxColSum = INT_MIN;
    for (int i = 0; i < cols; i++)
    {
        int colSum = 0;
        for (int j = 0; j < rows; j++)
        {
            colSum += mat[j][i];
        }
        maxColSum = max(maxColSum, colSum);
    }
    return maxColSum;
}

int diagonalSum(int mat[][3], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {

                sum += mat[i][j];
            }

            else if (j == n - i - 1)
            {
                sum += mat[i][j];
            }
        }
    }
    return sum;
}

    int main()
    {
        int matrix[3][3] = {{1, 2, 30}, {4, 5, 60}, {7, 80, 9}};
        int rows = 3;
        int cols = 3;
        int n = 3;
        cout << getMaxSumRows(matrix, rows, cols) << endl;
        cout << getMaxSumCols(matrix, rows, cols) << endl;
        cout<<diagonalSum(matrix,n)<<endl;


        return 0;
    }
