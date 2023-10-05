#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, tongChan, tongLe;
    tongChan = tongLe = 0;
    cout << "nhap n: ";
    cin >> n;
    for (int i = 1; i <= n; i++){
        if (i % 2 == 0){tongChan += i;}else{tongLe += i;}
    }
    cout << "tong cac so chan tu 1 den n: " << tongChan << endl << "tong cac so le tu 1 den n: " << tongLe << endl;
    return 0;
}