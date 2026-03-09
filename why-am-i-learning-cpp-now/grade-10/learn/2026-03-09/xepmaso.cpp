#include <iostream>
using namespace std;
#define tname "xepmaso"
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n"; \
    cerr<<x<<"\n";
const ll maxN=1000005;
struct p{ll id,sc;}a[maxN];
ll n;
void sw(p &a,p &b){p t=a;a=b,b=t;}
bool cmpfn(const p &a,const p &b){return(a.sc==b.sc?a.id<b.id:a.sc>b.sc);}
void quicksort_cmp(p *a,const ll &l,const ll &r){
    ll i=l,j=r;
    p x=a[(l+r)>>1];
    while(cmpfn(a[i],x)){i++;}
    while(cmpfn(x,a[j])){j--;}
    if(i<=j){sw(a[i],a[j]);i++,j--;}
    if(l<j){quicksort_cmp(a,l,j);}
    if(i<r){quicksort_cmp(a,i,r);}
}
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    for(ll i=1;i<=n;i++){cin>>a[i].id>>a[i].sc;}
    // sort(a+1,a+n+1,cmpfn);
    quicksort_cmp(a,1,n);
    for(ll i=1;i<=n;i++){
        lout(a[i].id<<" "<<a[i].sc);
    }
}
