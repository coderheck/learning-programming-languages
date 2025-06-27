#include"iostream"
using namespace std;
#define maxN 10000000
int l,r,res=0,tcsSieve[maxN+5];
int max(int a,int b){return(a>b)?a:b;}
int tcs(int n){
  int r=0;
  while(n!=0){
    r+=(n%10);n/=10;
  }
  return r;
}
void solve(){
  for(int i=l;i<=r;i++){
    int x=tcs(i);
    if(tcsSieve[x]==0){
      tcsSieve[x]=i;
    }else{
      res=max(res,i-tcsSieve[x]);
    }
  }
  cout<<res;
}
int main(){
  cin>>l>>r;
  solve();
}