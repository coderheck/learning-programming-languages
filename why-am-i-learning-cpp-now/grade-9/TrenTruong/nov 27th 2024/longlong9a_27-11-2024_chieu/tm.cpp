#include"iostream"
using namespace std;
#define ll long long
int n;ll l,r,a[1000005];
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin>>n;
  if(n<2){cout<<-1;exit(0);}
  for(int i=0;i<n;i++){cin>>a[i];}
  if(a[0]>a[1]){r=a[0];l=a[1];}else{l=a[0];r=a[1];}
  for(int i=2;i<n;i++){
    if(a[i]>r){
      l=r;r=a[i];
    }else if(a[i]>l){
      l=a[i];
    }
  }
  cout<<l+r;
}