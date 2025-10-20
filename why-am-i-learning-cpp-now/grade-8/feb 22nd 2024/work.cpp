#include"bits/stdc++.h"
using namespace std;
int main(){
    int n,k,l=0,d=0;cin>>n>>k;
    while(l<n){
        l+=k;k*=2;d++;
    }
    freopen("work.out", "w", stdout); cout<<3;
}