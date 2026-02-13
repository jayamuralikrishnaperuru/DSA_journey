#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str, num;
    cin >> str >> num;

    string result = "";
    for (int i = 0; i < str.length(); i++)
    {
        int alphaindex = str[i] - 'a' + 1;
        int digit = num[i % num.length()] - '0';
        result += to_string(alphaindex + digit);
    }

    cout << result << endl;
    return 0;
}
