#include"bits/stdc++.h"
using namespace std;
int main(){
    int n,m,max1=INT_MIN;cin>>n>>m;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            if((i*3)+(j*5)==n&&i+j==m){if(i*3>max1){max1=i*3;}}
        }
    }
    cout<<max1;
}