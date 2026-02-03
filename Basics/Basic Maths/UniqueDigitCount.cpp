#include <iostream>
using namespace std;

int UniqueDigitCount(int n)
{
    bool seen[10] = {false};
    int count = 0;

    // Special case: n = 0
    if (n == 0)
    {
        return 1; // digit 0 itself
    }

    while (n > 0)
    {
        int d = n % 10;
        if (!seen[d])
        {
            seen[d] = true;
            count++;
        }
        n /= 10;
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    cout << UniqueDigitCount(n) << endl;
    return 0;
}
