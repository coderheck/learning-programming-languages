#include"bits/stdc++.h"
using namespace std;
bool nguyento(int x){
    bool nt=true;
    if(x<=1){nt=false;}
    for(int i=2;i<=x/2;i++){if(x%i==0){nt=false;}}
    return nt;
}
int main(){
    int N,k;cin>>N>>k;int gia[N];int top[k];int nto=0;
    for(int i=0;i<N;i++){cin>>gia[i];}
    for(int i=0;i<N;i++){
        for(int j=i;j<N;j++){
            if(gia[i]<gia[j]){swap(gia[i],gia[j]);}
        }
        if(nguyento(gia[i])==true){nto+=gia[i];}
    }
    for(int i=0;i<k;i++){top[i]=gia[i];}
    for(int i=0;i<k;i++){cout<<top[i]<<" ";}
    cout<<"\n"<<nto;
}
/*
10 3 50 70 23 100 40 10 90 80 60 5
*/