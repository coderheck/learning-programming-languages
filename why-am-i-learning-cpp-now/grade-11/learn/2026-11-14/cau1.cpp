#include <iostream>
#include <algorithm>
using namespace std;
#define tname "cau1"
#define ll long long
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
const ll maxn=100005,inff=1ll<<62;
ll n,a[maxn],minn=inff,maxx=-inff;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    for(ll i=1;i<=n;i++){
        cin>>a[i];
        minn=min(minn,a[i]);
        maxx=max(maxx,a[i]);
    }
    // với bài này, cần tìm M sao cho mọi a_i % M bằng nhau. MÀ:
    // -) M thuộc đoạn [2; ...] vì a_i % 1 == a_i
    // -) nếu M > max_a_i ===> mọi a_i % M = a_i
    //      ===> M thuộc khoảng đoạn [2; max_a_i]
    //      ===> giải quyết được sub 2
    //          tuy nhiên có thể TLE vì O(10^4) * O(10^3) = O(10^7)
    // -) vì a_i đôi một phân biệt ===> sẽ có a_i % M <= a_i
    //      mà dấu = bắt đầu xảy ra khi M > a_i
    //      ===> M thuộc khoảng đoạn [2; min_a_i]
    ll res=0;
    for(ll M=minn;M>=2;M--){
        ll lst=0;bool good=true;
        for(ll i=1;i<=n;i++){
            ll r=a[i]%M;
            if(i==1){lst=r;}else if(r!=lst){good=false;}
        }
        if(good){res=M;break;}
    }
    lout(res)
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
