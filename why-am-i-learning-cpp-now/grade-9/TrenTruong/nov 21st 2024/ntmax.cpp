#include"iostream"
#include"string"
using namespace std;
#define ll long long
#define maxN 10000000
bool prCheck(ll n){
  if(n<2){return false;}
  for(ll i=2;i*i<=n;i++){
    if(n%i==0){return false;}
  }
  return true;
}
ll n,ncount=0,tmpN=0,maxPr=0;string s;
int main(){
  cin>>s;
  n=s.size();
  for(ll i=0;i<n;i++){
    if(s[i]>='0'&&s[i]<='9'){
      ncount++;
      tmpN*=10;tmpN+=s[i]-'0';
    }else{
      if(prCheck(tmpN)&&maxPr<tmpN){maxPr=tmpN;}
      tmpN=0;
    }
  }
  cout<<ncount<<"\n"<<maxPr;
}