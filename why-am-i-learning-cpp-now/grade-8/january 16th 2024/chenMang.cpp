#include"bits/stdc++.h"
using namespace std;
int main(){
    int a[100],n,x,c;
    cout<<"nhap so phan tu: "; cin>>n;
    for(int i=0;i<n;i++){
        cout<<"a["<<i<<"]: ";
        cin>>a[i];
    }
    cout<<"nhap vi tri can chen: "; cin>>x;
    cout<<"nhap gia tri can chen: "; cin>>c;
    for(int i=n-1;i>=x;i--){
        a[i+1]=a[i];
    }
    n++;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    a[x]=c;
    cout<<"\n";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}