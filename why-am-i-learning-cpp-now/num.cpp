#include <iostream>
#include <math.h>
using namespace std;

int n;

int main () {
    cin >> n;
    if (signbit(n) == true) {
        cout << "-";
    }else{cout << "+";}
    return 0;
}