#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
using namespace std;
#define ll long long
#define maxP 1000000
#define umap unordered_map
bool pr[maxP+5];
void prSieve(){
  pr[0]=pr[1]=true;
  for(ll i=2;i*i<=maxP;i++){
    if(!pr[i]){
      for(ll j=i*i;j<=maxP;j+=i){pr[j]=true;}
    }
  }
}
string s;ll tmp;vector<ll>res;umap<ll,ll>cnt;
int main(){
  prSieve();
  cin>>s;
  for(ll i=0;i<s.size();i++){
    if(s[i]>='0'&&s[i]<='9'){
      ll j=i,tmp=s[i]-'0';
      if(!pr[tmp]&&!cnt[tmp]){res.push_back(tmp);cnt[tmp]++;}
      i++;
      while(s[i]>='0'&&s[i]<='9'){
        tmp=tmp*10+s[i]-'0';
        if(!pr[tmp]&&!cnt[tmp]){res.push_back(tmp);cnt[tmp]++;}
        i++;
      }
      i=j;
    }
  }
  cout<<res.size()<<"\n";
  for(ll i=0;i<res.size();i++){cout<<res[i]<<" ";}
}
