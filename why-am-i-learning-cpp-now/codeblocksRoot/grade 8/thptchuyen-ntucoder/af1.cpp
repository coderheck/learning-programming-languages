#include<iostream>
#define ull unsigned long long
using namespace std;
ull tcs(ull n){
    ull t=0,n1=n;
    while(n1!=0){t+=n1%10;n1/=10;}
    return t;
}
int main(){
    unsigned int n;cin>>n;ull t=0;
    for(unsigned int i=1;i<=n;i++){
        ull a; cin>>a; t+=tcs(a);
    }
    cout<<t;
}
