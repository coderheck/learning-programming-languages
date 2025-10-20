#include"iostream"
using namespace std;
#define maxN 5000000
int n,res=0,maxdiffdivprod=1,prs[maxN],prc=0;
bool pr[maxN+5];
void prSieve(){
  pr[0]=pr[1]=true;
  for(int i=2;i*i<=maxN;i++){
    if(!pr[i]){
      prs[prc++]=i;
      for(int j=i*i;j<=maxN;j+=i){pr[j]=true;}
    }
  }
}
void prdivs(int x){
  int i=0,x1=x;
  long long prod=1;
  while(x!=1){
    if(x%prs[i]==0){
      prod*=prs[i];
      while(x%prs[i]==0){x/=prs[i];}
    }
    i++;
  }
  if(prod>maxdiffdivprod){maxdiffdivprod=prod;res=x1;}
}
int main(){
  cin>>n;
  prSieve();
  for(int i=n;i>=2;i--){prdivs(i);}
  cout<<res;
}