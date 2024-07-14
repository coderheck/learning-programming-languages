#include"bits/stdc++.h"
using namespace std;
int ucln(int a, int b){
    while(a!=b){if(a>b){a-=b;}else{b-=a;}}
    return a;
}
int main(){
    int x,y;cin>>x>>y;
    cout<<x/ucln(x,y)<<"/"<<y/ucln(x,y);
}