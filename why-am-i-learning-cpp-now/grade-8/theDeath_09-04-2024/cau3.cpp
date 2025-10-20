#include"iostream"
#include"algorithm"
#define ll long long
using namespace std;
int main(){
  int n;cin>>n;ll a[n],maxres=0;
  for(int i=0;i<n;i++){cin>>a[i];}
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(i!=j){
        ll tmp=(max(a[i],a[j])-min(a[i],a[j]))*(a[i]+a[j]);
        if(tmp>maxres){maxres=tmp;}
      }
    }
  }
  cout<<maxres;
}