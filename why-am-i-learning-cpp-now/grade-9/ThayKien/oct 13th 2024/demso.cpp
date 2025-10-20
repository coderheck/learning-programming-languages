#include"iostream"
#include"climits"
using namespace std;
#define ll long long
#define maxN 10000000
ll n,a,cnt[maxN+1],maxInp=LLONG_MIN,res=0;
int main(){
  cin>>n;
  for(int i=1;i<=n;i++){cin>>a;cnt[a]++;if(a>maxInp){maxInp=a;}}
  for(int i=1;i<=maxInp;i++){if(cnt[i]==0){res++;}}
  cout<<res;
}