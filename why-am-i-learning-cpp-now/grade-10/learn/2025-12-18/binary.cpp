#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<unordered_map>
using namespace std;
#define ll long long 
#define tname "binary"
#define umap unordered_map
ll n,k,t;
vector<string>ans;
umap<string,ll>pos;
void genStr(const ll &lim){
    string s(n,'0');
    for(ll i=0;i<lim;i++){
        s[i]='1';
    }
    sort(s.begin(),s.end());
    do{
        ans.push_back(s);
    }while(next_permutation(s.begin(),s.end()));
}
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        // freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>k;
    for(ll lim=0;lim<=k;lim++){genStr(lim);}
    sort(ans.begin(),ans.end());
    for(ll i=0;i<ans.size();i++){pos[ans[i]]=i;}
    cout<<ans.size()<<"\n";
    while(cin>>t){
        if(t&1){
            string s(n,'0');
            for(ll i=0;i<n;i++){cin>>s[i];s[i]+='0';}
            cout<<pos[s]<<"\n";
        }else{
            ll i;cin>>i;
            cout<<ans[i-1]<<"\n";
        }
    }
}