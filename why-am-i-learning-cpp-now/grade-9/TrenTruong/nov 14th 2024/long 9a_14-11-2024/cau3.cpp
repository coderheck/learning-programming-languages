#include"iostream"
#include"map"
using namespace std;
#define ll long long
#define maxN 100000
map<ll,ll>cnt;
int n;ll a,res=0;
int main(){
  if(fopen("cau3.inp","r")){
    freopen("cau3.inp","r",stdin);
    freopen("cau3.out","w",stdout);
  }
  cin>>n;
  for(int i=1;i<=n;i++){cin>>a;cnt[a]++;}
  for(auto i:cnt){
    res+=(ll)i.second/2;
  }
  cout<<res;
}