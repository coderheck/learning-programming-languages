#include"iostream"
using namespace std;
#define maxN 50000
int d,n,res=0,a[maxN+5],cnt[maxN+5],sum[maxN+5];
int main(){
  cin>>d>>n;
  for(int i=0;i<n;i++){
    cin>>a[i];
    sum[i]=sum[i-1]+a[i];
    if(sum[i]%4==0){res++;}
  }
  cout<<res;
}