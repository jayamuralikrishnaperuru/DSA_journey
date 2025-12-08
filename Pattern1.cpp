#include<iostream>
using namespace std;
class solution {
    public:
        void pattern1(int n){
            for(int i = 0;  i < n; i++){
                for(int j = 0; j < n; j++){
                    cout << "*" ;
                }
                cout << endl;
            }
        }
};
int main() {
    int N = 4;
    solution sol;
    sol.pattern1(N);
    return 0;
}