#include"bits/stdc++.h"
using namespace std;
float heron(double a){
    float p=0.5*a*3;
    return sqrt(p*(p-a)*(p-a)*(p-a));
}
float dtHinhTron(double a){
    return (3.14*a*a)/3;
}
int main(){
    double a;cin>>a;
    cout<<setprecision(2)<<fixed<<dtHinhTron(a)-heron(a);
}