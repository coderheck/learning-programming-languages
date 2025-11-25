#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long 
#define min(a,b) ((a)<(b)?(a):(b))
const ll maxN=105;
ll n,f,t,maxs=0;vector<ll>a(maxN);
int main(){
    if(fopen("candy.inp","r")){
        freopen("candy.inp","r",stdin);
        freopen("candy.out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>f>>t;
    for(ll i=1;i<=n;i++){
        cin>>a[i];maxs+=a[i];
    }
    if(maxs<t){cout<<"NO";return 0;}
    vector<ll>b=a;
    sort(b.rbegin(),b.rend());
    vector<vector<vector<ll>>>dp(n+5,vector<vector<ll>>(f+5,vector<ll>(maxs+5,10000000007)));
}

