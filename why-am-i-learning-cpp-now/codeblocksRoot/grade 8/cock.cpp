#include"bits/stdc++.h"
using namespace std;
int ucln(int a, int b){
    while(a!=b){if(a>b){a-=b;}else{b-=a;}}
    return a;
}
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    a/=ucln(a,b);b/=ucln(a,b);
    c/=ucln(c,d);d/=ucln(c,d);
    cout<<a<<"/"<<b<<" "<<c<<"/"<<d<<endl;
    int a1=a*d, b1=b*d, c1=c*b, d1=d*b;
    cout<<a1<<"/"<<b1<<" "<<c1<<"/"<<d1;
}
//test: 9 12 5 10
