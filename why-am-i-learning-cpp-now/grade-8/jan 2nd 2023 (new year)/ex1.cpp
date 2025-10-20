#include"bits/stdc++.h"
using namespace std;

int main(){
    int n,soDuong=0,tongCacSoDuong=0,soAm=0,maxSoAm,chiSoMaxSoAm,minSoDuong,chiSoMinSoDuong;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){cin>>a[i];}
    for(int i=0;i<n;i++){if(a[i]>0){soDuong+=1;tongCacSoDuong+=a[i];}}
    cout<<"so cac so hang duong: "<<soDuong<<" | tong cac so hang duong: "<<tongCacSoDuong<<endl;
    maxSoAm=a[0];
    for(int i=0;i<n;i++){if(a[i]<0){if(maxSoAm<a[i]){maxSoAm=a[i];chiSoMaxSoAm=i;}}}
    cout<<"so am lon nhat: "<<maxSoAm<<" | chi so: "<<chiSoMaxSoAm<<endl;
    minSoDuong=INT_MAX-1;
    for(int i=0;i<n;i++){if(a[i]>0){if(a[i]<minSoDuong){minSoDuong=a[i];chiSoMinSoDuong=i;}}}
    cout<<"so duong be nhat: "<<minSoDuong<<" | chi so: "<<chiSoMinSoDuong;
}
// test with: 7 -6 1 7 -4 49 -23 9