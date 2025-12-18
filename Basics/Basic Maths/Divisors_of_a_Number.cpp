#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> divisors(int n) {
        vector<int>divs ;
        for(int i = 1; i <= n; i++){
            if(n % i == 0){
                divs.push_back(i) ;
            }
        }
        return divs ;
    }
};

int main()
{
    int n = 6;

    Solution sol; 

    vector<int> ans = sol.divisors(n);
    
    cout << "The divisors of " << n << " are: ";
    for(int i=0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    
    return 0;
}