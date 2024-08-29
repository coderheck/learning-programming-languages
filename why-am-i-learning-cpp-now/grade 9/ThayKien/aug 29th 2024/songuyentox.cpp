#include"iostream"
#include"string"
#include"climits"
using namespace std;
#define maxN 1000001
#define ll long long
bool pr[maxN];string s;int res=0;
void prSieve(){
  for(int i=2;i<maxN;i++){pr[i]=true;}
  pr[0]=pr[1]=false;
  for(int i=2;i*i<=maxN;i++){
    if(pr[i]){
      for(int j=i*i;j<=maxN;j+=i){pr[j]=false;}
    }
  }
}
void parseString(){
  for(ll i=0;i<s.size();i++){
    if(s[i]>='0'&&s[i]<='9'){
      int num=s[i]-'0';
      while(s[i+1]>='0'&&s[i+1]<='9'){num*=10;num+=s[i+1]-'0';i++;}
      if(pr[num]&&num>res){res=num;}
    }
  }
  cout<<res;
}
int main(){
  prSieve();cin>>s;parseString();
}