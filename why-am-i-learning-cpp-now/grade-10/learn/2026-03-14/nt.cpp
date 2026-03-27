#include<iostream>
#include<algorithm>
using namespace std;
#define tname "nt"
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n"; \
//    cerr<<x<<"\n"
const ll maxN=100005,maxP=1000000;
bool pr[maxP+5];ll prs[maxP+5],prc=0;
void prSieve(){
    pr[0]=pr[1]=true;
    for(ll i=2;i<=maxP;i++){
        if(!pr[i]){
            prs[prc++]=i;
            for(ll j=i*2;j<=maxP;j+=i){pr[j]=true;}
        }
    }
}
ll n,k,a[maxN],sum[maxN],res=maxP;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    prSieve();
    cin>>n>>k;
    for(ll i=1;i<=n;i++){cin>>a[i];}
    // ý tưởng:
    // - dùng chặt nhị phân trên mảng số nguyên tố để tìm số
    //   nguyên tố gần a[i] nhất, sau đó lưu a[i] = hiệu giữa
    //   a[i] và số nguyên tố đó.
    // - cuối cùng dùng prefix sum/sliding window để tìm tổng
    //   đoạn con nhỏ nhất.
    // rất may là đề bài yêu cầu đoạn con gồm k phần tử liên tiếp
    // chứ không phải k phần tử bất kì!!!!
    for(ll i=1;i<=n;i++){
        if(pr[a[i]]){
            ll pos1=lower_bound(prs,prs+prc,a[i])-prs, // số nguyên tố đầu tiên >= x
                pos2=upper_bound(prs,prs+prc,a[i])-prs-1; // số nguyên tố cuối cùng <= x
//            lout("a: "<<a[i]<<" - p: "<<prs[pos1]<<" "<<prs[pos2]);
            a[i]=min(abs(a[i]-prs[pos1]),abs(a[i]-prs[pos2]));
        }else{
            a[i]=0;
        }
    }
    for(ll i=1;i<=n;i++){sum[i]=sum[i-1]+a[i];}
    for(ll i=1;i+k-1<=n;i++){
        res=min(res,sum[i+k-1]-sum[i-1]);
    }
    lout(res);
}
