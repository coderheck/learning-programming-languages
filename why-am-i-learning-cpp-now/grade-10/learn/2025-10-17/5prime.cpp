#include <iostream>
#include <cstdint>
using namespace std;
#define ll long long 
using u64 = uint64_t;
using u128 = __uint128_t;
const ll modN=1000000007;
// const ll maxP=10000000;
// bool pr[maxP+5];
// void prSieve(){
//     pr[0]=pr[1]=true;
//     for(ll i=2;i*i<=maxP;i++){
//         if(!pr[i]){
//             for(ll j=i*i;j<=maxP;j+=i){pr[j]=true;}
//         }
//     }
// }
// bool isprime(ll& x){
//     if(x==2||x==3){return true;}
//     if(x<2||!(x&1)||!(x%3)){return false;}
//     if(x<=maxP){return !pr[x];}
//     for(ll i=5;i*i<=x;i+=6){
//         if(x%i==0||x%(i+2)==0){return false;}
//     }
//     return true;
// }
u64 fastpowmod(u64 a,u64 b,u64 mod){
    u64 res=1;a%=mod;
    while(b){
        if(b&1){res=(u64)res*a%mod;}
        a=(u64)a*a%mod;b>>=1;
    }
    return res;
}
bool check(u64 n,u64 a,u64 d,ll s){
    u64 x=fastpowmod(a,d,n);
    if(x==1||x==n-1){return false;}
    for(ll r=1;r<s;r++) {
        x=(u64)x*x%n;
        if(x==n-1){return false;}
    }
    return true;
}
u64 ap[12]={2,3,5,7,11,13,17,19,23,29,31,37};
bool MillerRabin(u64 n){
    if(n<2){return false;}
    u64 d=n-1,r=0;
    while(!(d&1)){d>>=1;r++;}
    for(ll i=0;i<12;i++){
        if(n==ap[i]){return true;}
        if(check(n,ap[i],d,r)){return false;}
    }
    return true;
}
ll n,res=1,c=0;
int main(){
    if(fopen("5prime.inp","r")){
        freopen("5prime.inp","r",stdin);
        freopen("5prime.out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    for(ll i=n;c<5;i++){
        if(MillerRabin(i)){
            res=((res%modN)*(i%modN))%modN;
            c++;
        }
    }
    cout<<res;
}

