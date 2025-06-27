#include"bits/stdc++.h"
using namespace std;
bool nguyento(int a){
    bool nt=true;
    if(a<=1){nt=false;}
    for(int i=2;i<=a/2;i++){if(a%i==0){nt=false;}}
    return nt;
}
int main(){
    int x;cin>>x;
    while(x>0){
        if(nguyento(x)==false){}else{cout<<x<<"\n";} x/=10;
    }
}