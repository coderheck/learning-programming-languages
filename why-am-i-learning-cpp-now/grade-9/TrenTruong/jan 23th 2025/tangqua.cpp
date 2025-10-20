#include"iostream"
#include"map"
using namespace std;
#define ll long long
int n;ll a,maxn=-1;map<ll,int>cnt;
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin>>n;
  while(n--){
    cin>>a;
    if(a>maxn){maxn=a;}
    cnt[a]++;
  }
  cout<<cnt[maxn];
}