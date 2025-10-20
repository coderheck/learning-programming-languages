#include <iostream>

#define ll long long
using namespace std;

const int phibatbuoc = 25000;
ll phutgoi;

int main () {
    cout << "cuoc mac dinh: 25000d, nhap phut goi: ";
    cin >> phutgoi;
    ll cuoctra;
    if (phutgoi <= 50) {
        cuoctra = phibatbuoc + 600 * phutgoi;
    }else if (phutgoi <= 150) {
        cuoctra = phibatbuoc + 600 * 50 + 400 * (phutgoi - 50);
    }else if (phutgoi < 200) {
        cuoctra = phibatbuoc + 600 * 50 + 400 * (phutgoi - 50);
    }else if (phutgoi >= 200) {
        cuoctra = phibatbuoc + 600 * 50 + 400 * 100 + 200 * (phutgoi - 100);
    }
    cout << "cuoc can tra: " << cuoctra;
    return 0;
}