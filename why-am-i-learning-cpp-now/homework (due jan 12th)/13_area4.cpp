#include"bits/stdc++.h"
using namespace std;
float dtHinhThang(int a,int b,int c){
    float h=sqrt(c*c-((a-b)/2)*((a-b)/2));
    return ((a+b)/2)*h;
}
float dtHinhTron(int a,int b,int c){
    float h=sqrt(c*c-((a-b)/2)*((a-b)/2));
    return (h/4)*(h/4)*3.14;
}
int main(){
    int a,b,c,h;cin>>a>>b>>c;
    cout<<setprecision(2)<<fixed<<dtHinhThang(a,b,c)-dtHinhTron(a,b,c);
}