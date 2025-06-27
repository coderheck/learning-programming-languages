#include"iostream"
using namespace std;
#define ll long long
int n,st=0,nd=0;ll a[1000005],t,s=0,res=0;
int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  cin>>n>>t;
  for(int i=0;i<n;i++){cin>>a[i];}
  for(int i=0;i<n;i++){
    s+=a[i];nd++;
    while(s>t){s-=a[st];st++;}
    res+=(nd-st);
  }
  cout<<res;
}