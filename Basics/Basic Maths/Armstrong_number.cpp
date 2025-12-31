#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isArmstrong(int n) {
        int original = n ;
        int count = 0 ;
        int digit = 0 ;
        int temp = n ;
        while( temp > 0){
            digit++ ;
            temp /= 10 ;
        }
        while(n > 0){
            int lastDigit = n % 10 ;
            count += pow(lastDigit,digit) ;
            n = n / 10 ;
        }
        return(original == count) ;
    }
};

int main() {
    int n = 153;

    Solution sol; 
    
    bool ans = sol.isArmstrong(n);
    
    if(ans) {
        cout << n << " is an Armstrong number." << endl;
    } else {
        cout << n << " is not an Armstrong number." << endl;
    }
    
    return 0;
}