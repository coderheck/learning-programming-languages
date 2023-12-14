#include "bits/stdc++.h"
using namespace std;
bool nguyento(int n){
    bool nt=true;
    if(n<=1){nt=false;}
    for(int i=2;i<n;i++){if(n%i==0){nt=false;}}
    return nt;
}
int main(){
    int n;cin>>n;int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(nguyento(a[i])==true){
            bool super=true;
            int tmp=a[i];
            while(tmp>=1){
                if(nguyento(tmp)==false){super=false;}
                tmp/=10;
            }
            if(super==true){cout<<a[i]<<" ";}
        }
    }
}
/*int main()
{
    int a; cin>>a;
    if (nguyento(a)==true){
        cout<<a<<" nguyen to"<<endl;
        bool super=true;int tmp=a;
        while(tmp>1){
            if(nguyento(tmp)==false){super=false;cout<<tmp<<" khong nguyen to"<<endl;}else{cout<<tmp<<" nguyen to"<<endl;}
            tmp/=10;
        }
        if(super=true){cout<<a<<" sieu nguyen to"<<endl;}
    }
}*/