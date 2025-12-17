#include <stdio.h>
#define ll long long
#define tname "ioibin"
const ll maxN=10005;
ll p,t,x,y,z,par[maxN],sz[maxN];
void makeset(const ll &v){						// khởi tạo tập hợp
	par[v]=v,sz[v]=1;							// tạo tập hợp mới có gốc là đỉnh v và có kích cỡ là 1
}
ll findset(const ll &v){						// hàm đệ quy tìm gốc của tập hợp chứa đỉnh v
	/*
		if(v==par[v]){return v;}				// trả về đỉnh v nếu v là gốc của tập hợp
		ll p=findset(par[v]);					// đệ quy lên đỉnh cha của đỉnh v
		par[v]=p;								// nén đoạn từ v lên gốc của tập hợp
	*/
	return v==par[v]?v:par[v]=findset(par[v]);	// đống bên trên tóm gọn lại
}
void unioset(const ll &a,const ll &b){			// gộp tập hợp a và b
	ll x=findset(a),y=findset(b);				// tìm gốc của tập hợp a và b
	if(x!=y){									// gộp hai tập hợp nếu khác đỉnh gốc
		if(sz[x]<sz[y]){z=x;x=y,y=z;}			// đặt biến x là gốc của cây có kích cỡ lớn hơn
		par[y]=x,sz[x]+=sz[y];					// đặt lại đỉnh gốc của tập y (gộp tập x và y) đồng thời cập nhật kích cỡ của tập hợp mới
	}
}
int main(){
	// if(fopen(tname".inp","r")){
	// 	freopen(tname".inp","r",stdin);
	// 	freopen(tname".out","w",stdout);
	// }
	for(ll i=1;i<maxN;i++){makeset(i);} // khởi tạo tập hợp tại mỗi đỉnh
	scanf("%lld",&p);
	while(p--){
		scanf("%lld%lld%lld",&x,&y,&t);
		if(t&1){
			unioset(x,y);
		}else{
			printf("%d\n",findset(x)==findset(y));
		}
	}
}
