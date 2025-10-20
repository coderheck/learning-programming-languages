#include"iostream"
#include"stdio.h"
using namespace std;
int tcs(int arg){
    int n=arg,sum=0;
    while(n!=0){sum+=n%10;n/=10;}
    return sum;
}
int main(){
    if(fopen("bpairs.inp","r")){
        freopen("bpairs.inp","r",stdin);
        freopen("bpairs.out","w",stdout);
    }
    int n,dem=0; cin>>n; int a[n];
    for(int i=0;i<n;i++){cin>>a[i];}
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(tcs(a[i])==tcs(a[j]) && a[i]!=a[j]){dem++;}
        }
    }
    cout<<dem;
}

// 5 3 8 21 17 12
