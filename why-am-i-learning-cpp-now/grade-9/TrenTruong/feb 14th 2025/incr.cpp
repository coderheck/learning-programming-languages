#include"iostream"
using namespace std;
#define ll long long
ll n,d,res=0,a[10000005],k;
int main(){
  cin>>n>>d;
  cin>>a[0];
  for(int i=1;i<n;i++){
    cin>>a[i];
    if(a[i-1]>=a[i]){
      k=(a[i-1]-a[i])/d+1;
      res+=k;a[i]+=k*d;
    }
  }
  cout<<res;
}