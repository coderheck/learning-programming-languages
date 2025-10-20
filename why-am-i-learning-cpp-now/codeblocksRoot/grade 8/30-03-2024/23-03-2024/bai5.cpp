#include<iostream>
#define ll long long
using namespace std;
int main(){
    if(fopen("bai5.inp","r")){
        freopen("bai5.inp","r",stdin);
        freopen("bai5.out","w",stdout);
    }
    int n;cin>>n;int a[n];
    for(int i=0;i<n;i++){cin>>a[i];}
    sort(a,a+n);
    for(int i=n-1;i>=0;i--){
        bool f=false;
        for(int j=i-1;j>=0;j--){
            if(a[i]!=a[j]){cout<<a[j];f=true;break;}
        }
        if(f==false){cout<<a[n-1];break;}else{break;}
    }
}
