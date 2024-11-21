#include"iostream"
using namespace std;
#define ll long long
#define maxn 10000000
bool pr[maxn+1];int a,b,res=0;
void prSieve(){
  for(int i=2;i<=maxn;i++){pr[i]=true;}
  pr[0]=pr[1]=false;
  for(int i=2;i*i<=maxn;i++){
    if(pr[i]){
      for(int j=i*i;j<=maxn;j+=i){pr[j]=false;}
    }
  }
}
void check(int n){
  if(!pr[n]){return;}
  int rev=0;
  while(n!=0){rev*=10;rev+=n%10;n/=10;}
  res+=pr[rev];
}
int main(){
  prSieve();
  cin>>a>>b;
  for(int i=a;i<=b;i++){
    check(i);
  }
  cout<<res;
}