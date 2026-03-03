#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#define tname "pics"
#define ll long long
#define umap unordered_map
#define lout(x) cout<<(x)<<" ";/*cerr<<(x)<<" ";*/
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define getbit(x,k) ((x)>>(k))&1
const ll maxN=100005;
struct pic{ll id,s,m=0;}s[maxN];
ll n,m,a,b,L,l[maxN];
bool cmpfn(const pic &a,const pic &b){
	return a.s<b.s;
}
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>m;
    for(ll i=1;i<=n;i++){cin>>s[i].s;s[i].id=i;}
    if(n<=10&&m<=3){ // sub 1: 2 bitmask để chọn ảnh đĩa 1, đĩa 2
        const ll maxMm=1<<(n+1);
        for(ll q=1;q<=m;q++){
            ll res=0,rm1=1,rm2=1;
            cin>>a>>b>>L; // sub 1 => L = 0
            for(ll m1=1;m1<maxMm;m1++){
                for(ll m2=1;m2<maxMm;m2++){
                    // m1: ảnh đĩa 1, m2: ảnh đĩa 2
                    ll c=0,t1=0,t2=0;bool good=true;
                    for(ll i=1;i<=n;i++){
                        bool p1=getbit(m1,i-1),p2=getbit(m2,i-1);
                        if(p1==p2&&p1==true){good=false;break;}
                        if(p1){t1+=s[i].s;c++;}
                        if(p2){t2+=s[i].s;c++;}
                    }
                    if(c>n){good=false;}
                    if(t1>a||t2>b){good=false;}
                    if(!good){continue;}
                    if(res<c){res=c,rm1=m1,rm2=m2;}
                }
            }
            lout(res);
            if(q==1){
                string s="\n";
                for(ll i=1;i<=n;i++){
                    if(getbit(rm1,i-1)){
                        s+="1";
                    }else if(getbit(rm2,i-1)){
                        s+="2";
                    }else{
                        s+="0";
                    }
                }
                cout<<s<<"\n";
            }
        }
        return 0;
    }
	// skip sub 2, sang sub 3: L = 0 => chọn tất cả => tối ưu cách chọn
	// lấy túi bé hơn chọn các bức bé nhất -> túi lớn hơn chọn các bức lớn hơn
	sort(s+1,s+n+1,cmpfn);
	for(ll q=1;q<=m;q++){
		ll res=0,it=1,t1=0,t2=0,mn,mx;
		cin>>a>>b>>L; // sub 3 => L = 0
		mx=min(a,b),mn=max(a,b);
		while(it<=n&&t1<=mn){
			if(t1+s[it].s<=mn){
				t1+=s[it].s;
				if(q==1){s[it].m=1;}
				it++,res++;
			}else{break;}
		}
		while(it<=n&&t2<=mx){
			if(t2+s[it].s<=mx){
				t2+=s[it].s;
				if(q==1){s[it].m=2;}
				it++,res++;
			}else{break;}
		}
		cout<<res<<" ";
		if(q==1){
			string ss(n,'0');
			for(ll i=1;i<=n;i++){ss[s[i].id-1]=s[i].m+'0';}
			cout<<"\n"<<ss<<"\n";
		}
	}
}
