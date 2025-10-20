#include"iostream"
#include"stdio.h"
#include"algorithm"
using namespace std;
int main(){
    freopen("ptntktd.inp","r",stdin);
    freopen("ptntktd.out","w",stdout);
    int t,n,k;cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n;int a[n];
        for(int j=0;j<n;j++){cin>>a[j];}
        cin>>k;sort(a,a+n);cout<<a[k-1]<<"\n";
    }
}