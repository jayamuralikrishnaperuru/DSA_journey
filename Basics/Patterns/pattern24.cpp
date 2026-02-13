#include <iostream>
using namespace std;

int main()
{
    int a[5][5] = {
        {1, 44, 33, 22, 11},
        {44, 1, 22, 11, 88},
        {33, 22, 1, 77, 88},
        {11, 100, 99, 1, 77},
        {100, 99, 88, 77, 1}};
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += a[i][i];
    }
    cout << sum << endl;
    return 0;
}