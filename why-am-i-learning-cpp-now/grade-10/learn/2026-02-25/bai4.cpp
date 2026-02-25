// #include <iostream>
// #include <string>
// #include <unordered_map>
// using namespace std;
// #define tname "bai4"
// #define ll long long
// #define umap unordered_map
// #define lout(x) cout<<(x)<<"\n";cerr<<(x)<<"\n";
// const ll maxN=1000005,modN=1000000007,bb=31;
// ll n,h1[maxN],p[maxN],res=0;
// string s,a;
// umap<ll,ll>cnt;
// ll main(){
//     if(fopen(tname".inp","r")){
//         freopen(tname".inp","r",stdin);
//         freopen(tname".out","w",stdout);
//     }
//     cin.tie(0)->sync_with_stdio(0);
//     p[0]=1,h1[0]=0;
//     cin>>s;n=s.size(),s="#"+s;
//     for(ll i=1;i<=n;i++){
//         h1[i]=(h1[i-1]*bb+s[i]-'a')%modN;
//         p[i]=(p[i-1]*bb)%modN;
//     }
//     for(ll l=1;l<=n;l++){
//         for(ll r=l;r<=n;r++){
//             ll hh=(h1[r]-h1[l-1]*p[r-l+1]%modN+modN)%modN;
//             if(!cnt[hh]){res++,cnt[hh]=1;}
//         }
//     }
//     lout(res);
// }
#include <iostream>
#include <string>
using namespace std;
#define tname "bai4"
#define ll long long
#define lout(x) cout<<(x)<<"\n";cerr<<(x)<<"\n";
class node{
public:
    bool isWord;
    node* child[26];
    node(){
        isWord=false;
        for(ll i=0;i<26;i++){child[i]=0;}
    }
};
ll solve(string &s){
    node* head=new node();ll count = 0;
    for(size_t i=0;i<s.size();i++){
        node* temp = head;
        for (size_t j = i; j < s.length(); j++) {
            if(temp->child[s[j]-'a']==NULL){
                temp->child[s[j]-'a']=new node();
                temp->isWord=true;
                count++;
            }
            temp=temp->child[s[j]-'a'];
        }
    }
    return count;
}
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    string s;cin>>s;
    lout(solve(s));
}
