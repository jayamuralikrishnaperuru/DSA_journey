#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int mostFrequentElement(vector<int>& nums) {
    unordered_map<int, int> freq;
    int maxFreq = 0;
    int maxEle = INT_MAX;

    for (int num : nums) {
        freq[num]++;
        if (freq[num] > maxFreq || (freq[num] == maxFreq && num < maxEle)) {
            maxFreq = freq[num];
            maxEle = num;
        }
    }
    return maxEle;
}
};


int main() {
    vector<int> nums = {4, 4, 5, 5, 6};

    Solution sol; 
    
    int ans = sol.mostFrequentElement(nums);
    
    cout << "The highest occurring element in the array is: " << ans;
    
    return 0;
}
