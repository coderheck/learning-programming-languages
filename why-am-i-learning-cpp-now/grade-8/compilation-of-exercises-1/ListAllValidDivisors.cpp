#include <iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;
    for (long long iter = n; iter>=0; iter--){
        if (n%iter == 0){cout<<iter<<" " << "-" << iter << " ";}
    }
    return 0;
}