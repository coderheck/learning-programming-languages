#include"iostream"
using namespace std;
#define maxN 1000000
int a[maxN+5],prsum[maxN+5],twcnt[maxN+5],t,x,y;
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
int revn(int n){
  int r=0;
  while(n!=0){r=(r*10)+(n%10);n/=10;}
  return r;
}
bool tw(int n){
  int m=revn(n);
  return(pr[m]&&m!=n);
}
void preproc(){
  for(int i=1;i<=maxN;i++){
    prsum[i]=prsum[i-1];
    twcnt[i]=twcnt[i-1];
    if(pr[i]){
      prsum[i]+=i;
      twcnt[i]+=tw(i);
    }
  }
}
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  prSieve();
  preproc();
  cin>>t;
  while(t--){
    cin>>x>>y;
    cout<<prsum[y]-prsum[x-1]<<" "<<twcnt[y]-twcnt[x-1]<<"\n";
  }
}