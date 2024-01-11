#include"bits/stdc++.h"
using namespace std;
int main(){
    int n,s,c=0;cin>>n>>s;int chieurong[n];
    for(int i=0;i<n;i++){cin>>chieurong[i];}
    for(int i=0;i<n;i++){cout<<chieurong[i]<<" ";}
    cout<<"\n";
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(i+j<s){c++;}
        }
    }
    cout<<c;
}
