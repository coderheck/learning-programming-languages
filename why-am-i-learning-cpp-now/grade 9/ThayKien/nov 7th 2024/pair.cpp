#include"iostream"
#include"map"
using namespace std;
#define ll long long
#define maxN 1000000
int n;
ll a[maxN+5],res=0;
map<ll,ll>cnt;
int main(){
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a[i];
    res+=cnt[0-a[i]];
    cnt[a[i]]++;
  }
  cout<<res;
}