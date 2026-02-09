#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int mat[n][n];

    // Input matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }

    // Diagonal-wise traversal
    for (int sum = 0; sum <= 2 * n - 2; sum++)
    {
        for (int i = 0; i < n; i++)
        {
            int j = sum - i;
            if (j >= 0 && j < n)
            {
                cout << mat[i][j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
