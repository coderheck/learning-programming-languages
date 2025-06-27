#include"bits/stdc++.h"
using namespace std;
int main(){
    int n;cin>>n;int st[n];int khen=0;int max;
    for(int i=0;i<n;i++){cin>>st[i];}
    sort(st, st+n);
    max=st[n-1];
    for(int i=0;i<n;i++){if (st[i]==max){khen+=1;}}
    cout<<khen<<"\n"<<max;
}