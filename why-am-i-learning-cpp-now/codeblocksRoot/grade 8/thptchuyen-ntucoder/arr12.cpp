#include<iostream>
#include"algorithm"
using namespace std;
int main(){
    int n;cin>>n;int a[n];
    for(int i=0;i<n;i++){
        int t;cin>>t;
        if(t%2==0){t/=2;}else{t++;}
        a[i]=t;
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){cout<<a[i]<<" ";}
}
