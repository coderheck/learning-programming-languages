#include"bits/stdc++.h"
using namespace std;
int main(){
    long long a,tz=0;cin>>a;
    if(a<0){tz=-1;}else{
        for(int i=5;a/i>=1;i*=5){tz+=a/i;}
    }
    cout<<"\n"<<tz;
}