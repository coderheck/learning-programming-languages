#include"iostream"
#include"stdio.h"
using namespace std;
int ucln(int a, int b){
    int c=a,d=b;
    while(c!=d){if(c>d){c-=d;}else{d-=c;}}
    return c;
}
int main(){
    freopen("door.inp","r",stdin);
    freopen("door.out","w", stdout);
    int n; cin>>n;
    for(int i=1;i<=n;i++){
        int a,b; cin>>a>>b;
        for(int i=0;i<=a;i++){
            if(ucln(a,b+i)!=1){cout<<i<<"\n";break;}
        }
    }
}
// 3 15 7 23 11 35 42
