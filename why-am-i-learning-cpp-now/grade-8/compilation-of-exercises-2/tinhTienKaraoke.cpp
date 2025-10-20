#include <bits/stdc++.h>
#define ll long long
using namespace std;

int gioBatDau, gioKetThuc;

int main () {
    cout << "gia ba gio dau la 30000d/1 gio, nhap gio bat dau va gio ket thuc: ";
    cin >> gioBatDau >> gioKetThuc;
    int soGioThue;
    float tienTra;
    
    if (gioBatDau >= 8 and gioKetThuc <= 24) {
        soGioThue = gioKetThuc - gioBatDau;
        if (soGioThue <= 3) {
            tienTra = 30000 * soGioThue;
        }else if (soGioThue > 3) {
            tienTra = 30000 * 3 + (30000 * (soGioThue - 3)) * 7/10;
        }
        if (gioBatDau >= 8 and gioKetThuc <= 17) {
            tienTra = tienTra /10 * 9;
        }
        cout << "so tien phai tra: " << tienTra;
    }else{cout << "gio hat khong hop le!";}
    return 0;
}

// test: 9 - 16 ra 156600, 8 - 10 ra 54000, 8 - 23 ra 342000