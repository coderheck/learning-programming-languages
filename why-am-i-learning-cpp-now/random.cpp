#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    float n, tich, tong;
    cin>>n;
    tong = 0;
    tich = 1;
    for (int i = 1; i <= n; i++){
        tich = tich * i;
        tong = tong + tich;
    }
    cout<<setprecision(2)<<tong;
    return 0;
}

// default snippet for all later code