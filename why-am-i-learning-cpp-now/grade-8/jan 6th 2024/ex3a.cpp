#include"bits/stdc++.h"
using namespace std;
long long tongCacChuSo(long long arg){
    int n=arg,tong=0;
    while(n!=0){tong+=n%10;n/=10;}
    return tong;
}
int main(){
    long long x;cin>>x;
    while(x>=10){x=tongCacChuSo(x);}
    cout<<x;
}