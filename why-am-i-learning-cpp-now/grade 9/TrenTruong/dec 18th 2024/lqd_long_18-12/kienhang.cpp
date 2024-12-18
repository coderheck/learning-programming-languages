#include"iostream"
#include"algorithm"
#include"vector"
using namespace std;
#define ll long long
#define maxN 100000
int n,k,c=0,res=0;
ll m,s=0,a[maxN+5];
int main(){
  cin>>n>>m>>k;
  for(int i=0;i<n;i++){
    cin>>a[i];
    if(s+a[i]<=m){
      s+=a[i];
      if(i==k-1){
        cout<<0;return 0;
      }
      c++;
    }
  }
  sort(a,a+c-1,greater<ll>());
  for(int i=0;i<n;i++){
    s-=a[i];
    res++;
    if(s+a[k-1]<=m){cout<<res;return 0;}
  }
}