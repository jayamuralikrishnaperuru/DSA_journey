#include<iostream>
using namespace std;

class Solution {
public:
    void pattern14(int n) {
        for(int i = 0; i < n; i++){
            for(char ch = 'A'; ch <= 'A'+i; ch++){
                cout << ch;
            }
            cout << endl ;
        }
    }
};
int main(){
    int  N = 5;
    Solution sol;
    sol.pattern14(N);
    return 0;
}
