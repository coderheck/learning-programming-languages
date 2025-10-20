#include"iostream"
using namespace std;
#define maxN 100000
#define ll long long
ll k,n,a[maxN];
bool nice(ll boxmass){
  ll c=1,curmass=0;
  for(int i=0;i<n;i++){
    if(a[i]>boxmass){return false;}
    if(curmass+a[i]>boxmass){
      c++;curmass=a[i];
      if(c>k){return false;}
    }else{
      curmass+=a[i];
    }
  }
  return true;
}
void parsebox(){
  ll l=1,r=3000000000,res=-1;
  while(l<=r){
    ll mid=l+(r-l)/2;
    if(nice(mid)){res=mid;r=mid-1;}else{l=mid+1;}
  }
  cout<<res;
}
int main(){
  cin>>n>>k;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  parsebox();
}