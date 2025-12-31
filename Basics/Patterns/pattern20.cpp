#include<iostream>
using namespace std;

class Solution {
public:
    void crown(int n){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= i; j++){
                cout << "*" ;
            }
            for(int j = 1; j <= 2*(n-i); j++){
                cout << " " ;
            }
             for(int j = 1; j <= i; j++){
                cout << "*" ;
            }
            cout << endl ;
        }
    }
    void invertedcrown(int n){
        for(int i = n; i >= 1; i--){
            for(int j = 1; j <= i; j++){
                cout << "*" ;
            }
            for(int j = 1; j <= 2*(n-i+1); j++){
                cout << " " ;
            }
             for(int j = 1; j <= i; j++){
                cout << "*" ;
            }
            cout << endl ;
        }
    }
    void pattern20(int n) {
        crown(n);
        invertedcrown(n-1);
    }
};


int main(){
    int N = 5;
    Solution sol;
    sol.pattern20(N);
    return 0;
}