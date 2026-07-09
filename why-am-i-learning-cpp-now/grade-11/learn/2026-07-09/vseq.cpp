// #include <ext/pb_ds/assoc_container.hpp> // for policy hash table
#include <iostream>
using namespace std;
#define tname "vseq"
#define umap __gnu_pbds::gp_hash_table
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n"
#define oout(x) \
    cout<<x<<" ";\
	cerr<<x<<" ";
const ll maxN=200005;
ll n,M,q,a[maxN],sum[maxN],T[maxN],L[maxN],R[maxN],C[maxN],st[maxN*4],lz[maxN*4];
void uppref(){
	for(ll i=1;i<=n;i++){sum[i]=sum[i-1]+a[i];}
}
void make(ll id,ll l,ll r){
	lz[id]=0;
	if(l==r){st[id]=a[l];return;}
	ll m=(l+r)>>1;
	make(id<<1,l,m);make(id<<1|1,m+1,r);
	st[id]=st[id<<1]+st[id<<1|1];
}
void app(ll id,ll l,ll r){st[id]=(r-l+1)-st[id],lz[id]^=1;}
void psh(ll id,ll l,ll r){
    if(!lz[id]||l==r){return;}
    ll m=(l+r)>>1;
    app(id<<1,l,m);app(id<<1|1,m+1,r);
    lz[id]=0;
}
void updLR(ll id,ll l,ll r,ll u,ll v){
	if(u>r||v<l){return;}
    if(u<=l&&v>=r){app(id,l,r);return;}
    psh(id,l,r);
    ll m=(l+r)>>1;
    updLR(id<<1,l,m,u,v);
    updLR(id<<1|1,m+1,r,u,v);
    st[id]=st[id<<1]+st[id<<1|1];
}
// void updPP(ll id,ll l,ll r,ll i,ll val){
// 	if(i<l||i>r){return;}
// 	if(l==r){st[id]=val;return;}
// 	ll m=(l+r)>>1;
// 	if(i<=m){
// 		updPP(id<<1,l,m,i,val);
// 	}else{
// 		updPP(id<<1|1,m+1,r,i,val);
// 	}
// 	st[id]=st[id<<1]+st[id<<1|1];
// }
ll fch(ll id,ll l,ll r,ll u,ll v){
	if(u>r||v<l){return 0;}
	if(u<=l&&v>=r){return st[id];}
	psh(id,l,r);
	ll m=(l+r)>>1;
	return fch(id<<1,l,m,u,v)+fch(id<<1|1,m+1,r,u,v);
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>M>>q;
	for(ll i=1;i<=n;i++){cin>>a[i];}
	bool TeLiet=true;
	for(ll i=1;i<=q;i++){
		cin>>T[i]>>L[i]>>R[i];
		if(T[i]==1){
			cin>>C[i];
			if(TeLiet){TeLiet=false;}
		}
	}
	if(TeLiet){
		uppref();
		// sub 2: nếu không có theo tác loại 1 => chỉ có thao tác 
		// loại 2 là check đoạn [L; R] có a_i != a_j hay không
		// - thực hiện như bước 3 sub 1
		for(ll i=1,ss;i<=q;i++){
			ss=sum[R[i]]-sum[L[i]-1];
			lout((ss!=0&&ss!=R[i]-L[i]+1));
		}
	}else if(M==2){
		// sub 1 & 3: M = 2, L = R
		// - vì L = R => mỗi thao tác 2 sẽ chỉ update 1 phần tử
		// - vì M = 2 => giá trị của a_i sau update thuộc {0; 1}
		// - vì là dãy {0; 1} nên chỉ cần check xem sum[L; R] != 0 và
		// sum[L; R] != r-l+1  =>  có a_i != a_j
		// - vì n*q >= 10^6 nên không thể chạy update prefix 
		// từng q được, dùng CTDL
		//
		// sub 4: CTDL update đoạn
		// tính chất: nếu C_i chẵn => a_i giữ nguyên, C_i lẻ => a_i
		// thay đổi
		make(1,1,n);
		for(ll i=1;i<=q;i++){
			if(T[i]==1){
				if(C[i]&1){updLR(1,1,n,L[i],R[i]);}
			}else{
				ll cac=fch(1,1,n,L[i],R[i]);
				lout((cac!=0&&cac!=R[i]-L[i]+1));
			}
		}
    }	
}
