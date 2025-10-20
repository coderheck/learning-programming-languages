#include<iostream>
#include<string>
#include<unordered_map>
#include<vector>
using namespace std;
#define ll long long
#define maxP 10000000
string s;ll tmp=0;
bool pr[maxP+5];unordered_map<ll,ll>cnt;vector<ll>res;
void prSieve(){
  pr[0]=pr[1]=true;
  for(ll i=2;i*i<=maxP;i++){
    if(!pr[i]){
      for(ll j=i*i;j<=maxP;j+=i){pr[j]=true;}
    }
  }
}
int main(){
  prSieve();
  cin>>s;
  for(ll i=0;i<s.size();i++){
    if(s[i]>='0'&&s[i]<='9'){
      tmp=tmp*10+s[i]-'0';
    }else{
      if(!pr[tmp]&&!cnt[tmp]){res.push_back(tmp);cnt[tmp]++;}
      tmp=0;
    }
  }
  if(!pr[tmp]&&!cnt[tmp]){res.push_back(tmp);}
  cout<<res.size()<<"\n";
  for(ll i=0;i<res.size();i++){
    cout<<res[i]<<" ";
  }
  cout<<"\n";
}
