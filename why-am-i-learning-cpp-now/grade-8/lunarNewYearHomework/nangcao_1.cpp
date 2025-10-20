#include"bits/stdc++.h"
using namespace std;
float heron(int a, int b, int c){
    float s=(a+b+c)/2.0; // 2.0 deez nuts
    return sqrt(s*(s-a)*(s-b)*(s-c));
}
int main(){
    int x,y,z;cin>>x>>y>>z;
    if(x+y>z||x+z>y||y+z>x){cout<<fixed<<setprecision(2)<<heron(x,y,z);}else{cout<<0;}
}