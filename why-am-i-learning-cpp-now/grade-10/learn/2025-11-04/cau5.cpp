#include<iostream>
#include<string>
using namespace std;
#define ll long long
string s;ll n,c,res=0;
bool check(const ll &l){
	ll ac=0,v=0;
	for(ll i=0;i<l;i++){
		if(s[i]=='a'){ac++;}else if(s[i]=='b'){v+=ac;}
	}
	if(v<=c){return true;}
	ll li=0;
	for(ll ri=l;ri<n;ri++){
		if(s[li]=='a'){ac--;}else if(s[li]=='b'){v-=ac;}
		if(s[ri]=='a'){ac++;}else if(s[ri]=='b'){v+=ac;}
		if(v<=c){return true;}
	}
	return false;
}
int main(){
	if(fopen("cau5.inp","r")){
		freopen("cau5.inp","r",stdin);
		freopen("cau5.out","w",stdout);
	}
	cin>>n>>c>>s;
	ll l=1,r=n,m;
	while(l<=r){
		m=(l+r)>>1;
		if(check(m)){res=m;l=m+1;}else{r=m-1;}
	}
	cout<<res;
}

