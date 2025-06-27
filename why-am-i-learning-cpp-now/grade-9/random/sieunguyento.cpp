#include"iostream"
#include"sstream"
#include"algorithm"
#define ll long long
using namespace std;
bool nguyento(int n){
  bool nt=true;
  if(n<=1){nt=false;}
  for(ll i=2;i*i<=n;i++){
    if(n%i==0){nt=false;break;}
  }
  return nt;
}
void popbackInt(int &n){
  int r=0,n1=n,n2=0;
  while(n1!=0){n2*=10;n2+=n1%10;n1/=10;}
  while(n2>10){r*=10;r+=n2%10;n2/=10;}
  n=r;
}
int main(){
  if(fopen("sieunguyento.inp","r")){
    freopen("sieunguyento.inp","r",stdin);
  }
  int n;cin>>n;int a[n];
  for(int i=0;i<n;i++){cin>>a[i];}
  sort(a,a+n);
  for(ll i=n-1;i>=0;i--){
    int so=a[i],p=a[i];bool snt=true;
    while(so!=0){
      if(!nguyento(so)){
        snt=false;
        break;
      }else{
        popbackInt(so);
      }
    }
    if(snt){cout<<p<<" ";break;}
  }
}
