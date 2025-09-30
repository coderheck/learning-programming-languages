#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
#define ll long long
#define umap unordered_map
ll n,res=0,c=0;string s,t;
umap<char,ll>ref,cmp;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin>>s>>n;
    for(ll i=0;i<s.size();i++){ref[s[i]]++;}
    while(n--){
        cmp.clear();c=0;
        cin>>t;
        for(ll i=0;i<t.size();i++){cmp[t[i]]++;}
        for(umap<char,ll>::iterator i=ref.begin();i!=ref.end();i++){
            if(i->second==cmp[i->first]){c++;cout<<i->first<<" ";}
        }
        cout<<"\n";
        res+=(c==ref.size());
    }
    cout<<res;
}
