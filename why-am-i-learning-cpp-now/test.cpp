#include <bits/stdc++.h>
using namespace std;
bool prime(int n){
    bool p=true;
    if(n<=1){p=false;}
    for(int i=2;i<=n/2;i++){if(n%i==0){p=false;}}
    return p;
}
bool perfect(int n){
    bool p=true;long long s=0;
    for(int i=1;i<n;i++){if(n%i==0){s+=i;}}
    if(s!=n){p=false;}
    return p;
}
int main(){
    int x;cin>>x;
    if(prime(x)==true){cout<<"YES";}else{cout<<"NO";}
}