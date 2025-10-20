#include<iostream>
#include<string>
using namespace std;
#define ll long long
#define maxP 5000000
bool pr[maxP+5];
void prSieve(){
  pr[0]=pr[1]=true;
  for(ll i=2;i*i<=maxP;i++){
    if(!pr[i]){
      for(ll j=i*i;j<=maxP;j+=i){pr[j]=true;}
    }
  }
}
string s;ll dc=0,tmp=0,ntmax=0;
int main(){
  if(fopen("ntmax.inp","r")){
    freopen("ntmax.inp","r",stdin);
    freopen("ntmax.out","w",stdout);
  }
  prSieve();
  cin>>s;
  for(ll i=0;i<s.size();i++){
    if(s[i]>='0'&&s[i]<='9'){
      dc++;
      tmp=tmp*10+s[i]-'0';
    }else{
      if(!pr[tmp]&&tmp>ntmax){ntmax=tmp;}
      tmp=0;
    }
  }
  if(!pr[tmp]&&tmp>ntmax){ntmax=tmp;}
  cout<<dc<<"\n"<<ntmax;
}
