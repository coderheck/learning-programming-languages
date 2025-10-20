#include "bits/stdc++.h"
using namespace std;
bool nguyento(int a){
    bool nt=true;
    if(a<=1){nt=false;}
    for(int a1=2; a1<=a/2; a1++){
        if(a%a1==0){nt=false;}
    }
    return nt;
}
int main(){
    int n;
    cin>>n;
    int b[n];
    for(int i=0; i<n; i++){
        cin>>b[i];
    }
    for (int i=0; i<n; i++){
        if(nguyento(b[i])==true){cout<<b[i]<<" ";}
    }
}