#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float n, mul;
    cin>>n;
    mul = 1;
    for (int i1 = 1; i1 <= n; i1++){
        for (int i2 = i1-1; i1 >= 1; i2--){
            i1 = i1 * i2;
        }
        mul = mul * i1;
    }
    cout<<mul;
    return 0;
}

// default snippet for all later code