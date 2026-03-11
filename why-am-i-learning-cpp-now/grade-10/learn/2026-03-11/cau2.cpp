#include <iostream>
#include <string>
#include <sstream>
#include <map>
using namespace std;
#define tname "cau2"
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n"; \
    cerr<<x<<"\n";
string s;
map<ll,ll>cnt;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    getline(cin,s);
    stringstream ss(s);
    while(ss>>s){cnt[s.size()]++;}
    lout(cnt.size());
    for(map<ll,ll>::iterator i=cnt.begin();i!=cnt.end();i++){
        lout(i->first<<" "<<i->second);
    }
}
