#include"iostream"
#include"cmath"
using namespace std;
#define maxP 10000
bool pr[maxP+5];
void prSieve(){
  pr[0]=pr[1]=true;
  for(int i=2;i*i<=maxP;i++){
    if(!pr[i]){
      for(int j=i*i;j<=maxP;j+=i){pr[j]=true;}
    }
  }
}
bool securecontainprotect(int n){
  int sq=sqrt(n);
  return(sq*sq==n);
}
int n,primeres=0,a[100005],damn[100005],damnc=0;
int main(){
  prSieve();
  cin>>n;
  for(int i=0;i<n;i++){cin>>a[i];}
  for(int i=0;i<n;i++){
    if(!pr[a[i]]){primeres+=a[i];}
    if(securecontainprotect(a[i])){damn[damnc++]=a[i];}
  }
  cout<<primeres<<'\n';
  for(int i=0;i<damnc;i++){cout<<damn[i]<<" ";}
  cout<<'\n';
  for(int i=n-1;i>=0;i--){cout<<a[i]<<" ";}
}