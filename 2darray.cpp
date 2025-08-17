#include <iostream>
#include <utility>
using namespace std;

bool linearsearch(int mat[][3], int rows, int cols, int key)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (mat[i][j] == key)
            {
                return true;
            }
        }
    }
    return false;
}

pair<int, int> linearsearchreturnpair(int mat[][3], int rows, int cols, int key)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (mat[i][j] == key)
            {
                return {i, j};
            }
        }
    }
    return {-1, -1};
}

int main()
{
    int matrix[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    // 2d array
    // int matrix[4][3];
    int rows = 4;
    int cols = 3;
    // matrix[2][1]=80;
    // cout<<matrix[2][1]<<endl;
    // input
    //     for (int i = 0; i < rows; i++)
    //     {
    //         for (int j = 0; j < cols; j++)
    //         {
    //             cin >> matrix[i][j];
    //         }
    //     }

    // output
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         cout << matrix[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    cout << linearsearch(matrix, rows, cols, 8) << endl;
    pair<int, int> pos = linearsearchreturnpair(matrix, rows, cols, 9);
    cout << "(" << pos.first << "," << pos.second << ")" << endl;

    return 0;
}