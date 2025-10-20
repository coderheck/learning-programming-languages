#include"bits/stdc++.h"
using namespace std;
int main(){
    int n,m;cin>>n>>m;
    int minN=INT_MAX,minM=INT_MAX,maxT=INT_MIN;
    for(int i=2;i<=(n+m)/2;i++){
        for(int j=2;j<=(n+m)/2;j++){
            for(int k=2;k<=(n+m)/2;k++){
                if((i+j)*k==n+m && n/k==i && m/k==j){if(k>maxT){maxT=k;minN=i;minM=j;}}
            }
        }
    }
    cout<<maxT<<"\n"<<minN<<" "<<minM;
}