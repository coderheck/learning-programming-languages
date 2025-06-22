#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
using namespace std;
#define ll long long
#define umap unordered_map
struct winner{string t,s;};
ll n,c=0;string team,scho;
vector<winner>res;
umap<string,string>cnt;
int main(){
  cin.tie(0);
  cin>>n;
  while(n--){
    if(c==12){break;}
    cin>>team>>scho;
    if(cnt[scho]==""){
      winner a;a.s=scho,a.t=team;
      res.push_back(a);
      cnt[scho]=team;
      c++;
    }
  }
  cout<<"\n\n";
  for(ll i=0;i<res.size();i++){
    cout<<res[i].t<<" "<<res[i].s<<"\n";
  }
}
