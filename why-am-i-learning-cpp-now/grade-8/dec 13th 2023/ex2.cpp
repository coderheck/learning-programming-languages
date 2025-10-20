#include "bits/stdc++.h"
using namespace std;
bool hoanhao(int n){
    bool hh;long long sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0){sum+=i;}
    }
    if(sum==n){hh=true;}else{hh=false;}
    return hh;
}
int main(){
    int n;
    cin>>n;
    int b[n];
    for(int i=0; i<n; i++){
        cin>>b[i];
    }
    for (int i=0; i<n; i++){
        if(hoanhao(b[i])==true){cout<<b[i]<<" ";}
    }
}