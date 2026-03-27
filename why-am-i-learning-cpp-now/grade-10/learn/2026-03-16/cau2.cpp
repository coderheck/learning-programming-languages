#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
#define tname "cau2"
#define umap unordered_map
#define ll long long
#define lout(x) \
    cout<<x<<"\n"; \
    // cerr<<x<<"\n";
const ll maxN=105;
string s,a;
ll n,res=0;
umap<char,ll>cnt1;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>s>>n;
    for(const char &c:s){cnt1[c]++;}
    while(n--){
        umap<char,ll>cnt2;bool good=true;
        cin>>a;
        for(const char &c:a){cnt2[c]++;}
        for(umap<char,ll>::iterator i=cnt1.begin();i!=cnt1.end();i++){
            if(i->second>cnt2[i->first]){good=false;break;}
        }
        if(good){res++;}
    }
    lout(res);
}
