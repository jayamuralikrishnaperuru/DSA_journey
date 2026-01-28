#include <iostream>
using namespace std;

class Solution
{
public:
    bool rotatedString(string &s, string &goal)
    {
        if (s.length() != goal.length())
        {
            return false;
        }
        for (int i = 0; i < s.length(); i++)
        {
            string rotated = s.substr(i) + s.substr(0, i);
            if (rotated == goal)
            {
                return true;
            }
        }
        return false;
    }
};
int main()
{
    Solution sol;
    string s = "abcde";
    string goal = "cdeab";
    cout << (sol.rotatedString(s, goal) ? "true" : " false") << endl;
    return 0;
}