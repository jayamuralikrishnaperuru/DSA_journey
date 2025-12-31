#include<iostream>
using namespace std;

class Solution {
public:
    void pattern13(int n) {
        int num = 1;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= i; j++){
                cout << num << " " ;
                num = num + 1;
            }
            cout << endl ;
        }
    }
};
int main(){
    int  N = 5;
    Solution sol;
    sol.pattern13(N);
    return 0;
}
