#include"bits/stdc++.h"
using namespace std;
int ucln(int a, int b){
    while(a!=b){if(a>b){a-=b;}else{b-=a;}}
    return a;
}
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<a/ucln(a,b)<<"/"<<b/ucln(a,b)<<" "<<c/ucln(c,d)<<"/"<<d/ucln(c,d)<<endl;
    int a1=(a/ucln(a,b))*(d/ucln(c,d)), b1=(b/ucln(a,b))*(d/ucln(c,d)), c1=(c/ucln(c,d))*(b/ucln(a,b)), d1=(d/ucln(c,d))*(b/ucln(a,b));
    cout<<a1<<"/"<<b1<<" "<<c1<<"/"<<d1<<endl;
    cout<<(a1+c1)/ucln(a1+c1, d1)<<"/"<<d1/ucln(a1+c1, d1);
}
//test: 9 12 5 10