#include <iostream>
using namespace std;
#define ll long long 
const ll maxP=120;
bool pr[maxP+5];
ll revn(ll x){
    ll cmp=0,x1=x;
    while(x1){cmp=cmp*10+x1%10,x1/=10;}
    return(x==cmp);
}
ll dsum(ll x){
    ll s=0;
    while(x){s+=x%10,x/=10;}
    return s;
}
ll a,b,ans=0;
int main(){
    if(fopen("palinprime.inp","r")){
	freopen("palinprime.inp","r",stdin);
	freopen("palinprime_rac.out","w",stdout);
    }
    // cin.tie(0)->sync_with_stdio(0);
    pr[0]=pr[1]=true;
    for(ll i=2;i*i<=maxP;i++){
	if(!pr[i]){
	    for(ll j=i*i;j<=maxP;j+=i){pr[j]=true;}
	}
    }
    cin>>a>>b;
    for(ll i=a;i<=b;i++){
        ans+=(revn(i)&&!pr[dsum(i)]);
        // if((revn(i)&&!pr[dsum(i)])){cout<<i<<" ";}
        // cout<<i<<" ";
    }
    cout<<ans;
}
