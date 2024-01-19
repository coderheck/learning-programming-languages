#include"bits/stdc++.h"
using namespace std;
int main(){
    int n,min1=INT_MAX;cin>>n;
    if(1<=n<=100){
        for(int i=0;i<=n;i++){
            for(int j=0;j<=n;j++){
                if(i+j==n&&(i*250)+(j*300)<min1){min1=(i*250)+(j*300);}
            }
        }
    }
    if(n>100){
        for(int i=0;i<=n;i++){
            for(int j=0;j<=n;j++){
                if(i+j==n&&(i*220)+(j*280)<min1){min1=(i*220)+(j*280);}
            }
        }
    }
    cout<<min1;
}
