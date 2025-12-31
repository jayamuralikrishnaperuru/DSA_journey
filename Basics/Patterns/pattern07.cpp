#include<iostream>
using namespace std;

class Solution {
public:
    void pattern7(int n) {
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n-i-1; j++){
                cout << " " ;
            }

            for (int j = 0; j < 2*i+1; j++){
                cout << "*" ;
            }
            cout << endl ;
        }
    }
};
int main(){
    int N = 5;
    Solution sol;
    sol.pattern7(N);
    return 0;
}