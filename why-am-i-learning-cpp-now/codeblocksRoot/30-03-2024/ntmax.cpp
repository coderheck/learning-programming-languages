#include"iostream"
#include"string"
#define ll long long
using namespace std;
int toDigit(char c){
  return (int)c-'0';
}
bool nto(ll n){
  bool nt=true;
  if(n<=1){nt=false;}
  for(ll i=2;i*i<=n;i++){
    if(n%i==0){nt=false;break;}
  }
  return nt;
}
int main(){
  if(fopen("ntmax.inp","r")){
    freopen("ntmax.inp","r",stdin);
    freopen("ntmax.out","w",stdout);
  }
  string s;cin>>s;int maxNt=0,kts=0;
  // number 0 - 9: 48 - 57 in ASCII
  for(int i=0;i<s.size();i++){
    if(s[i]>=48 && s[i]<=57){
      kts++;
      int tmp=0,j=i+1;
      tmp=toDigit(s[i]);
      while(s[j]>=48 && s[j]<=57){
        kts++;
        tmp*=10;tmp+=toDigit(s[j]);
        j++;
      }
      i=j;
      if(nto(tmp)==true && tmp>maxNt){maxNt=tmp;}
    }
  }
  cout<<kts<<"\n"<<maxNt;
}
