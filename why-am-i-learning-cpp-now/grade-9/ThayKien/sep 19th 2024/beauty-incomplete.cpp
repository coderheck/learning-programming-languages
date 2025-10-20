#include"iostream"
using namespace std;
#define kien 1000001
#define ll long long
int a,b,c=0;bool pr[kien];
void prSieve(){
  for(int i=2;i<kien;i++){pr[i]=true;}
  pr[0]=pr[1]=false;
  for(int i=2;i*i<=kien;i++){
    if(pr[i]){
      for(int j=i*i;j<=kien;j+=i){pr[j]=false;}
    }
  }
}
ll comp(int n){
  ll res=0;
  while(n!=0){ll d=n%10;res+=d*d;n/=10;}
  return res;
}
int main(){
  prSieve();
  cin>>a>>b;
  for(ll i=a;i<=b;i++){
    if(pr[comp(i)]){c++;}
  }
  cout<<c;
}