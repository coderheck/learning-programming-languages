#include <iostream>
#include <queue>
#include <stack>
using namespace std;
#define ll long long 
#define tname "factorize"
ll Q,a,tot;
queue<ll>q;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>Q;
	while(Q--){
		cin>>a;
		while(!(a&1)){a>>=1;q.push(2);}
		for(ll i=3;i*i<=a;i+=2){
			while(!(a%i)){a/=i;q.push(i);}
		}
		if(a>1){q.push(a);}
		cout<<q.size()<<" ";
		while(q.size()){cout<<q.front()<<" ";q.pop();}
		cout<<"\n";
	}
}
