#include"iostream"
using namespace std;
int n,cur,cnt[1000];
int main(){
  cin>>n;
  for(int i=1;i<=n;i++){
    cin>>cur;
    cnt[cur]++;
  }
  for(int i=1;i<=n;i++){
    if(cnt[i]){cout<<i<<":"<<cnt[i]<<"\n";}
  }
}
