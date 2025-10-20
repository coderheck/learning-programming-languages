#include"bits/stdc++.h"
using namespace std;
int fibbo[100000];fibbo[0]=1;fibbo[1]=1;
for(int i=2;i<100000;i++){
    fibbo[i]=fibbo[i-1]+fibbo[i-2];
}
bool checkfibbo(int x){
    f=false;
    for(int i=0;i<100000;i++){if(fibbo[i]=x){f=true;break;}}
    return f;
}
int main(){
    int n;cin>>n;int r[3];bool nice=false;

    for(int a=1;a<=100000;a++){
        for(int b=a;b<=100000;b++){
            for(int c=b;c<=100000;c++){
                if(a+b+c==n&&a+b==c){r[0]=c;r[1]=b;r[2]=a;nice=true;break;}
            }
        }
    }
    if(nice==true){for(int i=0;i<3;i++){cout<<r[i];}}else{cout<<n;}
}

/* test:

*/
