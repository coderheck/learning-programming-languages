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
ll max(const ll &a,const ll &b){return(a>b)?a:b;}
string s;ll tm=0,res=0;
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  prSieve();
  cin>>s;
  for(ll i=0;i<s.size();i++){
    if(s[i]>='0'&&s[i]<='9'){
      tm=tm*10+s[i]-'0';
    }else{
      if(!pr[tm]&&tm>res){res=tm;}
      tm=0;
    }
  }
  if(!pr[tm]&&tm>res){res=tm;}
  cout<<res;
}
