#include"iostream"
#define ll long long
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  if(fopen("bai2.inp","r")){
      freopen("bai2.inp","r",stdin);
      freopen("bai2.out","w",stdout);
  }
  int x,y,n;cin>>x>>y>>n;
  if(n%2==0){
    cout<<max(x,y)/min(x,y);
  }else{
    cout<<max(2*x,y)/min(2*x,y);
  }
}
