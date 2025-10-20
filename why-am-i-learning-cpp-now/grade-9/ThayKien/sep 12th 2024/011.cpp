#include"iostream"
#include"vector"
using namespace std;
int a,n,sech=-1;
vector<int>cnt(100001,0);
int main(){
  int n;cin>>n;
  for(int i=1;i<=n;i++){cin>>a;cnt[a]++;}
  for(int i=1;i<=n;i++){
    if(cnt[i]==0){sech=i;cout<<"NO";break;}
  }
  if(sech==-1){cout<<"YES";}
}