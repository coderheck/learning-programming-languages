#include"iostream"
using namespace std;
#define ll long long
#define MaxN 1000000
int n,kien=0,sech;bool pr[MaxN];
void prSieve(){
  for(int i=2;i<MaxN;i++){pr[i]=true;}
  pr[0]=pr[1]=false;
  for(int i=2;i*i<=MaxN;i++){
    if(pr[i]){
      for(int j=2;i*j<=MaxN;j++){pr[i*j]=false;}
    }
  }
}
bool sprime(int n){
  while(n!=0){
    if(!pr[n]){return false;}
    n/=10;
  }
  return true;
}
int main(){
  prSieve();
  cin>>n;
  for(int i=1;i<=n;i++){
    cin>>sech;
    if(sprime(sech)&&sech>kien){kien=sech;}
  }
  cout<<kien;
}