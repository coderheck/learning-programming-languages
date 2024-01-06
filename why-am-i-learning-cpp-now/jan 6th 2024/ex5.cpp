#include"bits/stdc++.h"
using namespace std;
int main(){
    unsigned long long a,b=1;cin>>a;
    for(long long i=1;i<=a;i++){b*=i;}
    cout<<b<<"\n";
    while(b>=10){b/=10;}
    cout<<b;
}