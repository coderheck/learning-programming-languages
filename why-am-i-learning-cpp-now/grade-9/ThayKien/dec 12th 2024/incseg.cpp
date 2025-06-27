#include"iostream"
using namespace std;
#define ll long long
ll a[1000005];int n;
int main(){
  cin>>n;
  for(int i=0;i<n;i++){cin>>a[i];}
  int res=1,curL=1;
  for(int i=1;i<n;i++){
    if(a[i]>=a[i-1]){curL++;}else{
      if(res<curL){res=curL;}
      curL=1;
    }
  }
  if(res<curL){res=curL;}
  cout<<res;
}