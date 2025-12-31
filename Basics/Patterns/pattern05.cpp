#include<iostream>
using namespace std;

class Solution{
    public:
    void pattern5(int n){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n-i; j++){
                cout << "*" ;
            }
            cout << endl ;
        }
    }
};

int main(){
    int N = 7;
    Solution sol;
    sol.pattern5(N);
    return 0;
}