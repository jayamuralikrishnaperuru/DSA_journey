#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int sumHighestAndLowestFrequency(vector<int> &nums)
    {
        unordered_map<int, int> freq;
        for (int num : nums)
        {
            freq[num]++;
        }
        int maxFreq = 0;
        int minFreq = INT_MAX;
        for (auto &p : freq)
        {
            maxFreq = max(maxFreq, p.second);
            minFreq = min(minFreq, p.second);
        }
        return maxFreq + minFreq;
    }
};

int main()
{
    vector<int> nums = {1, 2, 2, 3, 3, 3};

    Solution sol;

    int ans = sol.sumHighestAndLowestFrequency(nums);

    cout << "The sum of highest and lowest frequency in the array is: " << ans;

    return 0;
}