#include<iostream>
using namespace std;

class Solution {
public:
void crown(int n ){
      for(int i=0; i<n; i++){
            for(int j = i; j < n; j++){
                cout << "*" ;
            }
            for(int j = 0; j < 2*i; j++){
                cout << " " ;
            }
            for(int j = i; j < n; j++){
                cout << "*" ;
            }
            cout << endl ;
        }
}
    void invertedcrown(int n){
        for(int i=n-1; i>=0; i--){
            for(int j = i; j < n; j++){
                cout << "*" ;
            }
            for(int j = 0; j < 2*i; j++){
                cout << " " ;
            }
            for(int j = i; j < n; j++){
                cout << "*" ;
            }
            cout << endl ;
        }
    }
    void pattern19(int n) {      
        crown(n);
        invertedcrown(n);
    }
};
int main(){
    int N = 5;
    Solution sol;
    sol.pattern19(N);
    return 0;
}