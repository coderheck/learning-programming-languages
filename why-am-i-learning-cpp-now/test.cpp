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
bool chinhphuong(long long n){
    bool cp;
    if( floor(sqrt(n)) == ceil(sqrt(n)) ){cp=true;}else{cp=false;}
    return cp;
}
bool hoanhao(long long arg){
    long long tong=0; bool hh;
    for (long long i=1;i<arg;i++){
        if (arg%i==0){tong+=i;}
    }
    if(arg==tong){hh=true;}else{hh=false;}
    return hh;
}
int main(){
    cout<<"thu tu: nguyen to -> chinh phuong -> hoan hao: ";
    int a, b, c;
    cin>>a>>b>>c;
    if(nguyento(a)==true){cout<<a<<" la so nguyen to"<<endl;}else{cout<<a<<"khong la so nguyen to"<<endl;}
    if(chinhphuong(b)==true){cout<<b<<" la so chinh phuong"<<endl;}else{cout<<b<<" khong la so chinh phuong"<<endl;}
    if(hoanhao(c)==true){cout<<c<<" la so hoan hao";}else{cout<<c<<" khong la so hoan hao";}
}