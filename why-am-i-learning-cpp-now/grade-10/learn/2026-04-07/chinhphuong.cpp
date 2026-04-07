#include <iostream>
#include <cmath>
#include <unordered_map>
using namespace std;
#define tname "chinhphuong"
#define ll long long
#define umap unordered_map
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n"; \
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" "; \
    cerr<<x<<" ";
const ll maxN=700005;
bool cp(const ll &x){
    ll sq=sqrt(x);
    return sq*sq==x;
}
ll n,Q,a[maxN];
bool sub1=true,sublog=true;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>Q;
    for(ll i=1;i<=n;i++){
        cin>>a[i];
        if(sub1){sub1=sub1&&(a[i]<=10);}
        if(sublog){
            sublog&=((a[i]&(a[i]-1))==0);
        }
    }
    // sub 1: 2 vòng lặp for, tích max=10^18
    if(sub1&&n<=18&&Q<=18){
        for(ll q=1,l,r,t=1,sq;q<=Q;q++){
            cin>>l>>r;t=1;
            for(ll j=l;j<=r;j++){t*=a[j];}
            sq=sqrt(t);
            lout((sq*sq==t?"YES":"NO"));
        }
        return 0;
    }
    // vì tích_max = a_i ^ n nên không thể trực tiếp tính tích [l;r]
    // ta nhận thấy: 2^k là số chính phương khi và chỉ khi k là số chẵn
    // => sub 2: cộng dồn số mũ k của a_i, nếu tổng số mũ là số chẵn thì
    // tích [l;r] là số chính phương
    // => sub 3: mảng cộng dồn số mũ
    // ll pp=3111696;
    // lout(cp(pp)<<" "<<log2(pp));
    if(sublog){
        // lout("sublog");
        for(ll i=1;i<=n;i++){a[i]=a[i-1]+(ll)log2(a[i]);}
        for(ll q=1,l,r;q<=Q;q++){
            cin>>l>>r;
            lout(((a[r]-a[l-1])&1?"NO":"YES"));
        }
        return 0;
    }
    // sub 4: tổng quát: a^k là số chính phương khi và chỉ khi k là số
    // chẵn ta có thể phân tích thừa số nguyên tố của mọi a_i trong
    // [l;r], sau đó nếu tổng mỗi số mũ k riêng lẻ là chẵn thì [l;r] là
    // số chính phương
    for(ll q=1,l,r,good;q<=Q;q++){
        umap<ll,ll>cnt;good=true;
        cin>>l>>r;
        for(ll j=l;j<=r;j++){
            ll mm=a[j];
            while(!(mm&1)){cnt[2]++,mm>>=1;}
            for(ll p=3;p*p<=mm;p+=2){
                while(mm%p==0){cnt[p]++,mm/=p;}
            }
            if(mm>1){cnt[mm]++;}
        }
        for(umap<ll,ll>::iterator i=cnt.begin();i!=cnt.end();i++){
            // lout(i->first<<" "<<i->second);
            if(i->second&1){good=false;break;}
        }
        lout((good?"YES":"NO"));
    }
    // sub 5: với mỗi số mũ, tạo một mảng cộng dồn
    // HELL NAH :skull: :skull: :skull:
}
