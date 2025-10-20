#include"bits/stdc++.h"
using namespace std;
bool nguyento(int a){
    bool nt=true;
    if(a<=1){nt=false;}
    for(int i=2;i<=a/2;i++){if(a%i==0){nt=false;}}
    return nt;
}
int main(){
    int x;cin>>x;bool f=false;
    for(int i1=2;i1<=x;i1++){
        if(f==false){}else{break;}
        for(int i2=2;i2<=x;i2++){
            if(nguyento(i1)==true&&nguyento(i2)==true&&i1+i2==x){cout<<i1<<"+"<<i2;f=true;}
        }
    }
}