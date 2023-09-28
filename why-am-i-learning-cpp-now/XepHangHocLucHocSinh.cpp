#include <bits/stdc++.h>
#define ll long long
using namespace std;

float dkt, dgk, dck;

int main () {
    cin >> dkt >> dgk >> dck;
    float dtb = (dkt + dgk + dck) / 3;
    if (dtb >= 9) {
        cout << "xep hang A";
    }else if (dtb >= 7) {
        cout << "xep hang B";
    }else if (dtb >= 5) {
        cout << "xep hang C";
    }else{cout << "xep hang F";}
    cout << endl << "dtb: " << dtb;
    return 0;
}