#include"bits/stdc++.h"
using namespace std;
int main(){
    int n;int c1=0,c2=0;cin>>n;
    for(int i=1;i<=n;i++){
        if(i>=(n-1)/2){c1++;}
    }
    for(int i=n+1;i<=n*n;i++){
        c2++;
    }
    cout<<c1<<"\n"<<c2;
}