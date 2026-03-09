#include <iostream>
using namespace std;
#define tname "quicksort"
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
    cout<<x<<" "; \
    cerr<<x<<" ";
const ll maxN=1000005;
void sw(ll &a,ll &b){ll t=a;a=b,b=t;}
void quicksort_fwd(ll *a,const ll &l,const ll &r){
    ll i=l,j=r,x=a[(l+r)>>1];
    while(a[i]<x){i++;}  while(a[j]>x){j--;}
    if(i<=j){sw(a[i],a[j]);i++,j--;}
    if(l<i){quicksort_fwd(a,l,j);}
    if(i<r){quicksort_fwd(a,i,r);}
}
void quicksort_bck(ll *a,const ll &l,const ll &r){
    ll i=l,j=r,x=a[(l+r)>>1];
    while(a[i]<x){i++;}  while(a[j]>x){j--;}
    if(i<=j){sw(a[i],a[j]);i++,j--;}
    if(l<i){quicksort_bck(a,l,j);}
    if(i<r){quicksort_bck(a,i,r);}
}
ll n,a[maxN];
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    for(ll i=1;i<=n;i++){cin>>a[i];}
    quicksort_fwd(a,1,n);
    for(ll i=1;i<=n;i++){lout(a[i]);}
}
