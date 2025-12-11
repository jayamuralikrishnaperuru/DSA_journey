#include<iostream>
using namespace std;

class Solution {
public:
    void pattern15(int n) {
        for(int i = 0; i < n; i++){
            for(char ch = 'A'; ch <= 'A'+(n-i-1); ch++){
                cout << ch ;
            }
            cout  << endl ;
        }
    }
};
int main(){
    int  N = 5;
    Solution sol;
    sol.pattern15(N);
    return 0;
}
