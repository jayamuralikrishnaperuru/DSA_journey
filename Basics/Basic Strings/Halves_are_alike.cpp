#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool halvesAreAlike(string s)
    {

        int n = s.length();
        int count1 = 0, count2 = 0;

        for (int i = 0; i < n / 2; i++)
        {
            if (isVowel(s[i]))
            {
                count1++;
            }
            if (isVowel(s[i + n / 2]))
            {
                count2++;
            }
        }

        return count1 == count2;
    }

private:
    bool isVowel(char ch)
    {
        return ch == 'a' || ch == 'e' || ch == 'i' ||
               ch == 'o' || ch == 'u' ||
               ch == 'A' || ch == 'E' || ch == 'I' ||
               ch == 'O' || ch == 'U';
    }
};

int main()
{

    string s;
    cout << "Enter an even length string: ";
    cin >> s;

    Solution obj;
    bool result = obj.halvesAreAlike(s);

    if (result)
        cout << "String halves are alike" << endl;
    else
        cout << "String halves are NOT alike" << endl;

    return 0;
}
