#include"bits/stdc++.h"
using namespace std;
int sochuso(int a){
    int b=a,c=0;
    while(b>0){b/=10;c++;}
    return c;
}
int main(){
    int a,b,c,d;cin>>a>>b>>c>>d;long long tong=a+b+c+d;
    cout<<tong<<"\n";
    for(int i=0;i<sochuso(tong);i++){
        if(i==sochuso(tong)-1||i==sochuso(tong)-2){cout<<to_string(tong)[i]<<" ";}
    }
}

/*
test: 99 1 2 3
output:
105
0 5
*/