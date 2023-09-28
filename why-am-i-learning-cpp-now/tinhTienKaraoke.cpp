#include <bits/stdc++.h>
#define ll long long
using namespace std;

int gioBatDau, gioKetThuc;

int main () {
    cout << "gia ba gio dau la 30000d/1 gio, nhap gio bat dau va gio ket thuc: ";
    cin >> gioBatDau >> gioKetThuc;
    int gioBatDauThuc, gioKetThucThuc, soGioThue, gioThue;
    float tienTra;
    if (gioBatDau < 8) {
       cout << "gio bat dau khong hop le!" << endl;
    }
    if (gioBatDau > 8) {
       gioBatDauThuc = gioBatDau;
       if (gioKetThuc > 24) {
            cout << "gio ket thuc khong hop le!" << endl;
       }else if (gioKetThuc <= 24 and gioKetThuc > gioBatDau) {
            gioKetThucThuc = gioKetThuc;
            soGioThue = gioKetThucThuc - gioBatDauThuc;
            gioThue = (soGioThue);
       }else if (gioKetThuc <= 24 and gioKetThuc <= gioBatDau) {
        cout << "gio ket thuc khong hop le!" << endl;
       }
    }
    if (gioThue < 3) {
        tienTra = 30000 * gioThue;
    }else if (gioThue == 3) {
        tienTra = 30000 * 3;
    }else if (gioThue > 3) {
        tienTra = 30000 * 3 + (30000 * (gioThue - 3)) * 70/100;
    }
    if (gioBatDau > 7 and gioKetThuc < 18) {
        tienTra = tienTra - (tienTra / 10 * 9);
    }
    cout << "so tien tra la: " << tienTra;
    return 0;
}

// test: 6 - 10 ra 156600, 8 - 10 ra 54000, 8 - 23 ra 342000