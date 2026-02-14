#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {

        int pos = 0;

        // Move non-zero elements forward
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != 0)
            {
                nums[pos++] = nums[i];
            }
        }

        // Fill remaining with zeros
        while (pos < nums.size())
        {
            nums[pos++] = 0;
        }
    }
};

int main()
{

    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    Solution sol;
    sol.moveZeroes(nums);

    for (int x : nums)
    {
        cout << x << " ";
    }

    return 0;
}
