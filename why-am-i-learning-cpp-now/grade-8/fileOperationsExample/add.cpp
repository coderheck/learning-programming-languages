#include"stdio.h"
#include"iostream"
using namespace std;
int add(int x, int y){
    return x+y;
}
int main(){
    int x, y;
    freopen("add.inp", "r", stdin);
    cin>>x>>y;
    freopen("add.out", "w", stdout);
    cout<<add(x,y);
}