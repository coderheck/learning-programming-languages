#include <iostream>
#include <math.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int main(){
    ll m, n, a;
    cin>>n>>m>>a;
    if(n>a){m = m * 75/100;}
    cout<<n*m;
    return 0;
}

//done