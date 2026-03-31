#include <iostream>
using namespace std;
#define ll long long 
#define tname "cau2b"
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
	cout<<x<<"\n"; \
	// cerr<<x<<"\n";
string s;
ll Q;
void cockc(){
	if(s.size()<8){lout("No");return;}
	bool num=false,upp=false,low=false,spe=false;
	for(const char &c:s){
		if(c>='0'&&c<='9'){num=true;}
		else if(c>='a'&&c<='z'){low=true;}
		else if(c>='A'&&c<='Z'){upp=true;}
		else{spe=true;}
	}
	lout((num and upp and low and spe?"Yes":"No"));
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>Q;
	for(ll q=1;q<=Q;q++){cin>>s;cockc();}
}
