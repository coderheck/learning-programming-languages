#include"bits/stdc++.h"
using namespace std;
int main(){
    int n;long long s=0;cin>>n;
    for(int i=1;i<=n;i++){long long t = i*i-(i-1)*(i-1);s+=t;}
    cout<<s;
}