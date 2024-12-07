#include"iostream"
const int N=1000;
using namespace std;
int a[1000],b[1000],cnt[100005];
long long res=0;
int main(){
  freopen("d1.inp","r",stdin);
  for(int i=0;i<N;i++){
    cin>>a[i]>>b[i];
    cnt[b[i]]++;
  }
  for(int i=0;i<N;i++){
    res+=a[i]*cnt[a[i]];
  }
  cout<<res;
}