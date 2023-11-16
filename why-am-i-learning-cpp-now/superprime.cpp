#include <iostream>
#include <math.h>
#define ll long long
using namespace std;

bool check(ll arg){
    bool isPrime=false;
    for (ll n=arg; n>=0; n--){
        if (arg%n==0){isPrime==true;break;}else continue;
    }
    return isPrime;
}

int main(){
    ll n;
    cin>>n;
    
    return 0;
}