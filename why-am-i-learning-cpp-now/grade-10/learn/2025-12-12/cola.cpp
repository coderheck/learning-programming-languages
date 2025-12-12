#include<iostream>
#include<ctime>
#include<cstdlib>
#include<random>
#include<chrono>
using namespace std;
#define ll long long
#define tname "cola"
const ll maxN=100005;
ll n,q,c[maxN];
struct ques{ll k,m;}qq[maxN];
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>q;
	for(ll i=1;i<=n;i++){cin>>c[i];}
	for(ll i=1;i<=q;i++){cin>>qq[i].k>>qq[i].m;}
	srand(time(0));
	cout<<rand()%100000000;
}
