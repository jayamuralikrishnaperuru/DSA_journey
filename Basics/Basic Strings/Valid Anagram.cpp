#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool anagramStrings(string &s, string t)
    {
        // If lengths are not equal, they cannot be anagrams
        if (s.length() != t.length())
            return false;

        // Sort both strings
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        // Compare sorted strings
        return s == t;
    }
};

int main()
{
    Solution solution;
    string str1 = "INTEGER";
    string str2 = "TEGERNI";
    bool result = solution.anagramStrings(str1, str2);
    cout << (result ? "True" : "False") << endl;
    return 0;
}
