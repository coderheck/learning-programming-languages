#include <iostream>
#include <math.h>
#define ll long long
using namespace std;

int main(){
    ll int n, u;
    u = 0;
    cin >> n;
    for (int i = n; i >= 0; i--){
        if (n%i == 0){
            u += 1;
        }
    }
    cout << u;
    return 0;
}