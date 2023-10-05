#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, tong1, tong2;
    tong1 = tong2 = 0;
    cout << "nhap n: ";
    cin >> n;

    cout << "cac so nguyen tu 1 den n: ";
    for (int i = 1; i <= n; i++){
        cout << i << " ";
    }

    cout << endl << "cac so chan tu 1 den n: ";
    for (int i = 1; i <= n; i++){
        if (i % 2 == 0){cout << i << " ";}
    }

    cout << endl << "cac so chia het cho 3 tu 1 den n: ";
    for (int i = 1; i <= n; i++){
        if (i % 3 == 0){cout << i << " ";}
    }

    cout << endl << "cac so chia het cho 3 tu 1 den n la: ";
    for (int i = 1; i <= n; i++){
        if (i % 3 == 0){
            cout << i << " ";
            tong1 += i;
        }
    }
    cout << "; tong cac so tren la: " << tong1;

    cout << endl << "cac so le chia het cho 3 tu 1 den n la: ";
    for (int i = 1; i <= n; i++){
        if (i % 3 == 0 and i % 2 != 0){
            cout << i << " ";
            tong2 += i;
        }
    }

    return 0;
}
/*

*/