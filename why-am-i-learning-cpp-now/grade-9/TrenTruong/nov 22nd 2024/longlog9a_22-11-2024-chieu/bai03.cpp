#include"iostream"
using namespace std;
#define maxN 3000000
int t,l,r,res=0;
bool pr[maxN+1];
int tcs(int n){
  int res=0;
  while(n!=0){res+=n%10;n/=10;}
  return res;
}
void prSieve(){
  for(int i=2;i<=maxN;i++){pr[i]=true;}
  pr[0]=pr[1]=false;
  for(int i=2;i*i<=maxN;i++){
    if(pr[i]){
      for(int j=i*i;j<=maxN;j+=i){pr[j]=false;}
    }
  }
}
int main(){
  prSieve();
  cin>>t;
  while(t--){
    res=0;
    cin>>l>>r;
    for(int i=l;i<=r;i++){
      if(pr[i]&&tcs(i)%5){res++;}
    }
    cout<<res<<"\n";
  }
}