#include"bits/stdc++.h"
using namespace std;
int main(){
    int n,m,min=0;long long s;cin>>n>>m;s=n*m;
    for(int i=s;i>=0;i-=2){s=i;min+=1;}
    if(s==1){min+=1;}
    cout<<min;
}