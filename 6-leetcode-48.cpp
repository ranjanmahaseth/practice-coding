#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int n = matrix.size();
    

    // transpose of matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // reverse each row
    for (int k = 0; k < n; k++)
    {
        int i = 0;
        int j = n - 1;

        while (i < j)
        {
            swap(matrix[k][i], matrix[k][j]);
            i++;
            j--;
        }
    }
      // print the matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}