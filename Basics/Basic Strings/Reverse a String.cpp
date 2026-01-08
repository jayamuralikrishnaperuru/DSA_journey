#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        // your code goes here
        stack<char> stack;
        for (char c : s)
        {
            stack.push(c);
        }
        for (int i = 0; i < s.size(); ++i)
        {
            s[i] = stack.top();
            stack.pop();
        }
        return;
    }
};

int main()
{
    vector<char> str = {'h', 'e', 'l', 'l', 'o'};

    Solution sol;

    sol.reverseString(str);

    for (char c : str)
    {
        cout << c;
    }

    return 0;
}