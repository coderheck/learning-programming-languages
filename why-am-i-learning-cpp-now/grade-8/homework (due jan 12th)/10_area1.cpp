#include"bits/stdc++.h"
using namespace std;
float heron(double a){
    float p=0.5*a*3;
    return sqrt(p*(p-a)*(p-a)*(p-a));
}
float dtHinhTron(double a){
    float r=a*sqrt(3)/6;
    return r*r*3.14;
}
int main(){
    int a;cin>>a;float p=a*3;
    cout<<setprecision(2)<<fixed<<heron(a)-dtHinhTron(a);
}