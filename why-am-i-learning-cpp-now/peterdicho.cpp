#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
    int n,nam,hai;
    nam=hai=0;
    cin >> n;
    for (int n1=0; n1<=n; n1++){
        for (int n2=0; n2<=n; n2++){
            if ((n1*2) + (n2*5) == n){cout<<n1<<"to 2 usd va "<<n2<<" to 5 usd"<<endl;}
        }
    }
    return 0;     
}