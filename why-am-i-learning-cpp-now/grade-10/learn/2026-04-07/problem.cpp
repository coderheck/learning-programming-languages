#include <iostream>
using namespace std;
#define tname "problem"
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n"; \
    // cerr<<x<<"\n";
const ll maxN=100005,maxP=1000000;
bool pr[maxP+5];
ll n,a[maxN],res=0;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    pr[0]=pr[1]=true;
    for(ll i=2;i*i<=maxP;i++){
        if(!pr[i]){
            for(ll j=i*i;j<=maxP;j+=i){pr[j]=true;}
        }
    }
    cin>>n;
    for(ll i=1;i<=n;i++){cin>>a[i];}
    // độ dài 2: 3 cách chọn
    // độ dài 3 (1 - 2 - 3): 6 cách chọn
    // độ dài 4 (1 - 2 - 3 - 4): 10 cách chọn
    // độ dài 5 (1 - 2 - 3 - 4 - 5): 15 cách chọn
    // +) đánh dấu các a_i là số nguyên tố
    // +) duyệt tìm các đoạn [l;r] thỏa mãn và đếm số cặp bằng len*(len+1)/2
    // (với len là độ dài đoạn [l;r])
    ll l=1;
    for(ll r=1,len;r<=n;){
        while(r+1<=n&&!pr[a[r]]){r++;} // tìm vị trí l
        if(r==n&&!pr[a[r]]){break;} // xử lí trường hợp l chạy đến cuối mảng
        l=r;
        while(r+1<=n&&pr[a[r+1]]){r++;} // tìm vị trí r
        len=r-l+1;
//        lout(l<<" "<<r<<" "<<len<<" "<<len*(len+1)/2);
        res+=len*(len+1)/2;
        r++;
//        lout(r);
    }
    lout(res);
}
