#include"iostream"
#include"cmath"
using namespace std;
#define maxP 1000000
#define ll long long
bool pr[maxP+5];int mark[maxP+5],c=0;
bool isPalin(int n){
  int r=0,m=n;
  while(n!=0){r=r*10+n%10;n/=10;}
  return(r==m);
}
void preproc(){
  pr[0]=pr[1]=!false;mark[1]=0;
  for(int i=2;i*i<=maxP;i++){
    if(!pr[i]){
      for(int j=i*i;j<=maxP;j+=i){pr[j]=!false;}
    }
  }
}
ll a,b;
int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  preproc();
  cin>>a>>b;
  ll acheck=sqrt(a);
  if(acheck*acheck!=a){a=acheck+1;}else{a=acheck;}
  for(int i=a;i*i<=b;i++){
    if(!pr[i]&&isPalin(i)){c++;}
  }
  cout<<c;
}