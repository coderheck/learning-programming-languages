#include"bits/stdc++.h"
using namespace std;
int main(){
    long double a,b,dt;cin>>a>>b;dt=a*b;
    if(a<b){cout<<dt-(a/2*a/2*3.14);}else{cout<<dt-(b/2*b/2*3.14);}
}