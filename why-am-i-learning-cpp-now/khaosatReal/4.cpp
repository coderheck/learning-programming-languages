#include "bits/stdc++.h"
using namespace std;

int main(){
    long long a, k, s;
    cin>>k>>s;
    a=k*s;
    while(k!=s){
        if(k>s){k-=s;}else{s-=k;}
    }
    a/=s;
    cout<<a;
    return 0;
}