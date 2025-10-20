#include"iostream"
#include"string"
using namespace std;
#define maxN 5000000
bool pr[maxN+5];
void prSieve(){
  pr[0]=pr[1]=true;
  for(int i=0;i*i<=maxN;i++){
    if(!pr[i]){
      for(int j=i*i;j<=maxN;j+=i){pr[j]=true;}
    }
  }
}
int n,ncount=0,tmp=0,maxp=0;
string s;
int main(){
  prSieve();
  cin>>s;
  n=s.size();
  for(int i=0;i<n;i++){
    if(s[i]>='0'&&s[i]<='9'){
      ncount++;
      tmp*=10;tmp+=s[i]-'0';
    }else{
      if(!pr[tmp]&&maxp<tmp){maxp=tmp;}
      tmp=0;
    }
  }
  if(!pr[tmp]&&maxp<tmp){maxp=tmp;}
  cout<<ncount<<"\n"<<maxp;
}