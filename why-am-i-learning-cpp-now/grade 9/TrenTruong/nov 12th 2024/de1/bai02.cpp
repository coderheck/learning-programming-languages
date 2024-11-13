#include"iostream"
using namespace std;
#define maxN 100000
bool pr[maxN+1];
void prSieve(){
  for(int i=2;i<=maxN;i++){pr[i]=true;}
  pr[0]=pr[1]=false;
  for(int i=2;i*i<=maxN;i++){
    if(pr[i]){
      for(int j=i*i;j<=maxN;j+=i){pr[j]=false;}
    }
  }
}
int revnum(int n){
  int ret=0;
  while(n!=0){ret*=10;ret+=n%10;n/=10;}
  return ret;
}
int p,q;
int main(){
  prSieve();
  if(fopen("bai02.inp","r")){
    freopen("bai02.inp","r",stdin);
    freopen("bai02.out","w",stdout);
  }
  cin>>p>>q;
  while(p!=q){
    (pr[revnum(p)])?cout<<p<<"\n":cout<<"";
    p++;
  }
}