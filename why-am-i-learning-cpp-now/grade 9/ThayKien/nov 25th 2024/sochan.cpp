#include"iostream"
using namespace std;
#define maxN 1000000
#define ll long long
int n,q,d,c;
ll a[maxN+5];
int evenCnt[maxN+5];
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cin>>n>>q;
  evenCnt[0]=1;
  for(int i=1;i<=n;i++){
    cin>>a[i];
    evenCnt[i]=evenCnt[i-1]+(a[i]%2==0);
  }
  while(q--){
    cin>>d>>c;
    cout<<evenCnt[c]-evenCnt[d-1]<<"\n";
  }
}