#include"bits/stdc++.h"
using namespace std;
bool nguyento(int a){
    bool nt=true;
    if(a<=1){nt=false;}
    for(int i=2;i<=a/2;i++){if(a%i==0){nt=false;}}
    return nt;
}
bool hoanhao(int a){
    bool hh=true; int t=0;
    for(int i=1;i<a;i++){
        if(a%i==0){t+=i;}
    }if(t!=a){hh=false;}
    return hh;
}
bool chinhphuong(int a){
    bool cp=true;
    if(ceil(sqrt(a))!=floor(sqrt(a))){cp=false;}
    return cp;
}
int main(){
    int a; cin>>a;
    cout<<nguyento(a)<<endl;
    cout<<hoanhao(a)<<endl;
    cout<<chinhphuong(a)<<endl;
}