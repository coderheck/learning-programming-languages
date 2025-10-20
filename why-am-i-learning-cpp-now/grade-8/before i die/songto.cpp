#include"iostream"
#include"stdio.h"
using namespace std;
bool nguyento(int n){
    bool nt=true;
    if(n<=1){nt=false;}
    for(int i=2;i<=n/2;i++){if(n%i==0){nt=false;}}
    return nt;
}
bool songnguyento(int n){
    bool snt=true;int n1=n,tongchuso1=0;
    while(n1!=0){tongchuso1+=n1%10;n1/=10;}
    if(nguyento(tongchuso1)!=true){snt=false;}
    return snt;
}
int main(){
    freopen("snt.inp","r",stdin);
    freopen("snt.out","w",stdout);
    int n,soSNT=0;cin>>n;int a[n],a1[n],d=0;
    for(int i=0;i<n;i++){cin>>a[i];}
    for(int i=0;i<n;i++){
        if(songnguyento(a[i])==true){soSNT++;a1[d]=a[i];d++;}
    }
    cout<<soSNT<<"\n";
    for(int i=0;i<d;i++){cout<<a1[i]<<" ";}
}