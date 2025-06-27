#include"iostream"
#define ll long long
using namespace std;
int main(){
  if(fopen("powerofprime.inp","r")){
    freopen("powerofprime.inp","r",stdin);
    freopen("powerofprime.out","w",stdout);
  }
  int t;cin>>t;
  for(int i=1;i<=t;i++){
    int n,p,d=0;cin>>n>>p;
    for(int i=1;i<=n;i++){
      int tmp=i;
      if(tmp%p==0){
        while(tmp%p==0){d++;tmp/=p;}
      }
    }
    cout<<d<<"\n";
  }
}