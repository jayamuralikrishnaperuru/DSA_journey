#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string str;
        cin >> str;

        int n = str.length();
        int freq[26] = {0};

        // Count first half
        for (int i = 0; i < n / 2; i++)
        {
            freq[str[i] - 'a']++;
        }

        // Start index of second half
        int start = (n % 2 == 0) ? n / 2 : n / 2 + 1;

        // Subtract second half
        for (int i = start; i < n; i++)
        {
            freq[str[i] - 'a']--;
        }

        bool isLapindrome = true;

        for (int i = 0; i < 26; i++)
        {
            if (freq[i] != 0)
            {
                isLapindrome = false;
                break;
            }
        }

        if (isLapindrome)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}