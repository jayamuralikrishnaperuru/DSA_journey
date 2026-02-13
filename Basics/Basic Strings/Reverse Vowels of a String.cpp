#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isVowel(char ch)
{
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main()
{
    string s;
    cin >> s;

    int left = 0;
    int right = s.length() - 1;

    while (left < right)
    {
        while (left < right && !isVowel(s[left]))
            left++;

        while (left < right && !isVowel(s[right]))
            right--;

        if (left < right)
        {
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }

    cout << s << endl;
    return 0;
}
