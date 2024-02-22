#include"bits/stdc++.h"
using namespace std;
int a[10000];
int main(){
    int n;cin>>n;
    for(int i=0;i<n;i++){cin>>a[i];}
    sort(a, a+n);
    while(n>1){
        for(int i=0;i<n;i++){
            if(a[i]==a[i+1]){
                for(int j=i;j<n;j++){
                    a[j]=a[j+1];
                }
                n--;
                break;
            }
            if(a[i]<a[i+1]){a[i+1]-=a[i];break;}
            sort(a, a+n);
        }
    }
    cout<<a[0];
}