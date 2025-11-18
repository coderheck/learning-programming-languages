#include <iostream>
using namespace std;
#define ll long long 
#define min(a,b) ((a)<(b)?(a):(b))
const ll maxN=10005;
ll m,n,e[maxN],l[maxN],ress=1,resm;
int main() {
    cin.tie(0)->sync_with_stdio(0);
	cin>>m>>n;resm=m;
    for(ll i=0;i<n;i++){cin>>e[i]>>l[i];}
    for(ll i=0;i<n;i++){
        ll eps=e[i],len=l[i];
        while(eps){
            ll am=resm/len;
            if(!am){ress++,resm=m;continue;}
            ll tm=min(eps,am);
            resm-=tm*len,eps-=tm;
        }
    }
    cout<<ress<<" "<<resm;
}

