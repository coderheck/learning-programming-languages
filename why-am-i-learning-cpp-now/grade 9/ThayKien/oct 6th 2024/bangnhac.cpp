#include"iostream"
#include"algorithm"
using namespace std;
#define ll long long
#define maxN 100000
struct tape{int id;int dur;}a[maxN];
int n,t=0,res=0;
bool cmpfn(const tape &a,const tape &b){return a.dur<b.dur;}
int main(){
  if(fopen("bangnhac.inp","r")){
    freopen("bangnhac.inp","r",stdin);
    freopen("bangnhac.out","w",stdout);
  }
  cin>>n;
  for(int i=0;i<n;i++){cin>>a[i].dur;a[i].id=i+1;}
  sort(a,a+n,cmpfn);
  for(int i=0;i<n;i++){
    t+=a[i].dur;
    cout<<a[i].id<<" "<<t<<"\n";
    res+=t;
  }
  cout<<res;
}