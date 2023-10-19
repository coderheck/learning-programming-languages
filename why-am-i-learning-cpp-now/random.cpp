#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
    float x, n, tong;
    cout<<"nhap x va n: ";
    cin>>x>>n;
    tong = 0;
    for (int i = 0; i <= n; i++){
        tong = tong + pow(x, (2*i)+1);
    }
    cout<<tong;
    return 0;
}

// default snippet for all later code