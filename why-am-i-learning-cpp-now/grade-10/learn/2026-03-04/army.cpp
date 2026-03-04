#include <iostream>
using namespace std;
#define tname "army"
#define ll long long
#define lout(x) cout<<(x)<<"\n";cerr<<(x)<<"\n";
ll n,m;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>m;
    lout(((n|1)>>1)*((m|1)>>1));
    // lout(n*m-1);
}
