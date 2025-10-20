#include"iostream"
using namespace std;
#define ll long long
int t;ll n;
int main(){
  if(fopen("bai1.inp","r")){
    freopen("bai1.inp","r",stdin);
    freopen("bai1.out","w",stdout);
  }
  cin>>t;
  for(int i=1;i<=t;i++){
    cin>>n;
    cout<<n/3+n/5<<"\n";
  }
}