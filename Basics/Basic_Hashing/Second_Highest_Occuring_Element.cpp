#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int secondMostFrequentElement(vector<int> &nums)
    {
        unordered_map<int, int> freq;

        // Count frequency of each number
        for (int num : nums)
        {
            freq[num]++;
        }

        int maxFreq = 0, secMaxFreq = 0;
        int maxEle = -1, secEle = -1;

        for (auto &p : freq)
        {
            int f = p.second;
            int val = p.first;

            if (f > maxFreq)
            {
                secMaxFreq = maxFreq;
                secEle = maxEle;
                maxFreq = f;
                maxEle = val;
            }
            else if (f == maxFreq)
            {
                maxEle = min(maxEle, val);
            }
            else if (f > secMaxFreq)
            {
                secMaxFreq = f;
                secEle = val;
            }
            else if (f == secMaxFreq)
            {
                secEle = min(secEle, val);
            }
        }

        // If no valid second most frequent element
        if (secMaxFreq == 0 || secMaxFreq == maxFreq)
            return -1;

        return secEle;
    }
};

int main()
{
    vector<int> nums = {4, 4, 5, 5, 6, 7};

    Solution sol;

    int ans = sol.secondMostFrequentElement(nums);

    cout << "The second highest occurring element in the array is: " << ans;

    return 0;
}