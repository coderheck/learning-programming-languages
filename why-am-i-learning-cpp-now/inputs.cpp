#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main () {
    ll number;
    cout << "enter number" << endl;
    cin >> number;
    if (number % 2 == 0) {cout << "number got is divisible by 2" << endl;}
    if (number % 3 == 0) {cout << "number got is divisible by 3" << endl;}
    if (number % 5 == 0) {cout << "number got is divisible by 5" << endl;}
    if (number % 7 == 0) {cout << "number got is divisible by 7" << endl;}
    return 0;
}