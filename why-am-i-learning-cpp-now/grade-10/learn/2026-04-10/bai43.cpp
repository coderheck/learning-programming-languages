// #include <ext/pb_ds/assoc_container.hpp> // for policy hash table
#include <iostream>
#include <stack>
using namespace std;
#define tname "bai43"
#define umap __gnu_pbds::gp_hash_table
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n"; \
    // cerr<<x<<"\n"
#define oout(x) \
    cout<<x<<""; \
    // cerr<<x<<"";
// const ll maxN=1005;
ll n;
stack<int>st;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    // loo% who% loop and fall
    // dare dare dare
    // loo% who% loop and lose
    // spy spiral
    // who are you——this endless maze of trust and deceit
    // a lifetime illusion——let me tell the finest lies till I die
    while(n){st.push(n&1),n>>=1;}
    while(st.size()){oout(st.top());st.pop();}
}
