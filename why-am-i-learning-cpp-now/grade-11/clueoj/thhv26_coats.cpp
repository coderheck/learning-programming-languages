#include <iostream>
#include <vector>
using namespace std;
#define tname "coats"
#define ll long long
const ll maxN=100005;
ll n,a[maxN],res=10000000000007;
vector<bool>rch,rbuy;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	for(ll i = 0; i < n - 1; i++){cin>>a[i];}
	ll maxmask=(1ll<<n)+1;
	for(ll mask = 1; mask < maxmask; mask++){
		vector<bool>ch(20,false); // dừng lại tại shop_i
		for(ll i = 0; i < n - 1; i++){
			if(mask & (1ll << i)){ch[i]=true;}
		}
		if(!ch[0]){continue;} // luôn phải dừng lại tại shop đầu tiên
		for(ll m = 1; m < maxmask; m++){
			vector<bool>buy(20,false); // mua áo tại shop_i
			bool good=true;
			ll cost=0;
			for(ll i = 0; i < n - 1; i++){
				if(m & (1ll << i)){
					if(!ch[i]){good=false;break;} // mua áo tại shop_i nhưng chưa chọn dừng lại tại shop_i
					buy[i]=true;
				}
			}
			if(!good){continue;}
			for(ll i = 0, ao = 0, con = 0; i < n - 1; i++){
				if(buy[i]){ao++;con=0;cost+=1+a[i];}
				else if(ch[i]){con=0;cost++;}
				else if(con>ao){good=false;break;}
				con++;
			}
			if(good && res>cost){
				res=cost;
				// rch=ch,rbuy=buy;
			}
		}
	}
	cout<<res<<"\n";
	// for(ll i=0;i<n-1;i++){cout<<rch[i]<<" ";}
	// cout<<"\n";
	// for(ll i=0;i<n-1;i++){cout<<rbuy[i]<<" ";}
}
