#include<iostream>
using namespace std;

class Solution {
public:
    void pattern6(int n) {
        for(int i = n; i > 0; i--){
            for(int j = 1; j <= i; j++){
                cout << j ;
            }
            cout << endl;
        }
    }
};

int main(){
    int N = 5;
    Solution sol;
    sol.pattern6(N);
    return 0 ;
}