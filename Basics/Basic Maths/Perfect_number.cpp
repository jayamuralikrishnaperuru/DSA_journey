#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPerfect(int n) {
        int count = 0 ;
        for(int i = 1; i < n-1; i++){
            if(n % i  == 0){
                count +=  i ;
            }
        }
        return (count == n) ;
    }
};

int main() {
    int n = 6;

    Solution sol; 
    
    bool ans = sol.isPerfect(n);
    
    if(ans) {
        cout << n << " is a perfect number." << endl;
    } else {
        cout << n << " is not a perfect number." << endl;
    }
    
    return 0;
}