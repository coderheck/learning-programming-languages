#include <iostream>
#include <math.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int main(){
    ll a,b;
    cin>>a>>b;
    for (ll a1=a;a1>=0;a1--){
        if (a%a1==0){if (b%a1==0){cout<<a1;break;}else continue;}
    }
    return 0;
}