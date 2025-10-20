#include"iostream"
#include"map"
using namespace std;
const int maxN=50000;
int d,n,a[maxN+5],sum[maxN+5];
map<int,int>cnt;
long long res=0;
int main(){
  if(fopen("bai05.inp","r")){
    freopen("bai05.inp","r",stdin);
    freopen("bai05.out","w",stdout);
  }
  cin>>d>>n;
  cnt[0]=1;
  for(int i=0;i<n;i++){
    cin>>a[i];
    sum[i]=sum[i-1]+a[i];
    int v=sum[i]%d;
    res+=cnt[v];
    cnt[v]++;
  }
  cout<<res;
}