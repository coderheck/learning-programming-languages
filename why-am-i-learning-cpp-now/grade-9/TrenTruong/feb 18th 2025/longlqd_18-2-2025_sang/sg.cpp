#include"iostream"
using namespace std;
int n,a[100005],cnt[1000005],x,maxN=0;
int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  cin>>n;
  while(n--){
    cin>>x;
    if(x>maxN){maxN=x;}
    cnt[x]++;
  }
  cout<<cnt[maxN];
}