#include<iostream>
using namespace std;
#define ll long long
const ll maxP=10000000;
bool pr[maxP+5];
ll l,r,k,res=0;ll d[maxP];
void sub1(){
    pr[0]=pr[1]=true;
    for(ll i=2;i*i<=maxP;i++){
        if(!pr[i]){
            for(ll j=i*i;j<=maxP;j+=i){pr[j]=true;}
        }
    }
    for(ll i=l;i<=r;i++){res+=!pr[i];}
    cout<<res;
}
void sub2(){
    for(ll i=1;i<=1000000;i++){
        for(ll j=i;j<=1000000;j+=i){d[j]++;}
    }
    for(ll i=l;i<=r;i++){res+=(d[i]==k);}
    cout<<res;
}
int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin>>l>>r>>k;
    if(k==2){sub1();}else{sub2();}
}
