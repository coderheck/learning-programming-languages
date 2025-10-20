#include<iostream>
#define ull unsigned long long
using namespace std;
int main(){
    int n,k;cin>>n;long long a[n],t=0;
    for(int i=0;i<n;i++){cin>>a[i];}
    cin>>k;
    for(int i=0;i<k;i++){t+=a[i];}
    cout<<t;
}
