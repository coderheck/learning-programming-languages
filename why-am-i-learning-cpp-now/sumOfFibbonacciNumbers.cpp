#include"bits/stdc++.h"
using namespace std;
long long fibbo[100]={1,1};
bool checkfibbo(int n){
    bool f=false;
    for(int i=0;i<100;i++){
        if(fibbo[i]==n){f=true;}
    }
    return f;
}
int main(){
    for(int i=2;i<100;i++){
        fibbo[i]=fibbo[i-1]+fibbo[i-2];
    }
    int n;cin>>n;
    for(int i=0;i<100;i++){
        for(int j=0;j<100;j++){
            for(int m=0;m<100;m++){
                if(i+j+m==n && checkfibbo(i)==true &&checkfibbo(j)==true &&checkfibbo(m)==true){cout<<i<<" "<<j<<" "<<m<<"\n";break;}
            }
        }
    }
}

/* test:

*/
