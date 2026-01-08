#include <iostream>
using namespace std;
class Solution
{
public:
    bool palindromeCheck(string &s)
    {
        // your code goes here
        int left = 0;
        int right = s.length() - 1;
        while (left < right)
        {
            if (s[left] != s[right])
            {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};

int main()
{
    Solution solution;
    string str = "racecar";

    if (solution.palindromeCheck(str))
    {
        cout << str << " is a palindrome." << endl;
    }
    else
    {
        cout << str << " is not a palindrome." << endl;
    }

    return 0;
}
