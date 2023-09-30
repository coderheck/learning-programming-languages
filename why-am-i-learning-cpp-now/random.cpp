#include <iostream>
#include <cmath>
#define max 1000000000000000000
using namespace std;

int main() {
    int a, a1;
    cin >> a;
    if (0 < a <= max) {
        a1 = sqrt(a);
        cout << a + a1;
    }else{return 0;}
    return 0;
}