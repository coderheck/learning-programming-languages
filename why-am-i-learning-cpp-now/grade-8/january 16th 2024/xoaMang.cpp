#include"bits/stdc++.h"
using namespace std;
int main(){
    int a[100],n,x;
    cout<<"nhap so phan tu: "; cin>>n;
    for(int i=0;i<n;i++){
        cout<<"a["<<i<<"]: ";
        cin>>a[i];
    }
    cout<<"nhap vi tri can xoa: "; cin>>x;
    for(int i=x;i<n;i++){
        a[i]=a[i+1];
    }
    n--;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}