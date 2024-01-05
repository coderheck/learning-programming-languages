#include"bits/stdc++.h"
using namespace std;
bool nguyento(long long n){
    bool nt=true;
    if(n<=1){nt=false;}
    for(long long i=2;i<=n/2;i++){
        if(n%i==0){nt=false;}
    }
    return nt;
}
bool chinhphuong(int a){
    bool cp=true;
    if(ceil(sqrt(a))!=floor(sqrt(a))){cp=false;}
    return cp;
}
bool hoanhao(int a){
    bool hh=true; int t=0;
    for(int i=1;i<a;i++){
        if(a%i==0){t+=i;}
    }if(t!=a){hh=false;}
    return hh;
}
int main(){
    int n; cin>>n;bool dx=true;int p1=0;int s=0;int p2=0;
    int a[n];
    for(int i=0;i<n;i++){cin>>a[i];}
    for(int i=0;i<n/2;i++){if(a[i]!=a[n-i-1]){dx=false;}}
    if(dx==true){cout<<"doi xung";}else{cout<<"khong doi xung";}cout<<endl<<endl;
    for(int i=0;i<n;i++){if(nguyento(a[i])==true){p1+=1;cout<<a[i]<<" ";}}
    cout<<endl<<"co "<<p1<<" phan tu la so nguyen to"<<endl<<endl;
    for(int i=0;i<n;i++){if(chinhphuong(a[i])==true){s+=1;cout<<a[i]<<" ";}}
    cout<<endl<<"co "<<s<<" phan tu la so chinh phuong"<<endl<<endl;
    for(int i=0;i<n;i++){if(hoanhao(a[i])==true){p2+=1;cout<<a[i]<<" ";}}
    cout<<endl<<"co "<<p2<<" phan tu la so hoan hao";
}

/* test:
5 2 8 9 2 8
7 1 2 13 24 13 2 1
4 6 28 28 6
8 6 9 10 8 10 9 1 6
*/