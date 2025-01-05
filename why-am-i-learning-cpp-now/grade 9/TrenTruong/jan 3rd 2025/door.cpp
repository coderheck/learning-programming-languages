#include"iostream"
#include"climits"
using namespace std;
#define ll long long
ll min(ll a,ll b){return(a<b)?a:b;}
void findlowestturn(ll a,ll b,int c){
  if(a==b){cout<<"0\n";return;}
  ll ans=LLONG_MAX;
  if(a>b){
    ans=a-b;
  }
  for(ll i=2;i*i<=a;i++){
    if(a%i==0){
      ll n=(b+i-1)/i;
      ans=min(ans,i*n-b);
      n=(b+(a/i)-1)/(a/i);
      ans=min(ans,(a/i)*n-b);
    }
  }
  if(c!=0){
    cout<<ans<<"\n";
  }else{cout<<ans;}
}
int n;
struct Q{ll a,b;}arr[105];
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>arr[i].a>>arr[i].b;
  }
  for(int i=0;i<n;i++){
    findlowestturn(arr[i].a,arr[i].b,n-i+1);
  }
}