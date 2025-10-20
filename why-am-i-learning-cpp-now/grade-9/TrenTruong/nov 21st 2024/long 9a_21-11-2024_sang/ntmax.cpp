#include"iostream"
#include"string"
using namespace std;
#define ll long long
#define maxN 10000000
ll n,ncount=0,tmpN=0,maxPr=0;string s;bool pr[maxN+1];
void prSieve(){
  for(int i=1;i<maxN;i++){pr[i]=true;}
  pr[0]=pr[1]=false;
  for(int i=2;i*i<=maxN;i++){
    if(pr[i]){
      for(int j=i*i;j<=maxN;j+=i){pr[j]=false;}
    }
  }
}
int main(){
  prSieve();
  cin>>s;
  n=s.size();
  for(ll i=0;i<n;i++){
    if(s[i]>='0'&&s[i]<='9'){
      ncount++;
      if(s[i]>'0'){
        tmpN+=s[i]-'0';
        while(s[i+1]>='0'&&s[i+1]<='9'){
          i++;ncount++;
          tmpN*=10;tmpN+=s[i]-'0';
        }
        if(pr[tmpN]&&maxPr<tmpN){maxPr=tmpN;}
        tmpN=0;
      }
    }
  }
  cout<<ncount<<"\n"<<maxPr;
}