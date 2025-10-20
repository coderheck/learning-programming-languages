#include"iostream"
#include"map"
using namespace std;
int n,res=0,a;
map<int,int>cnt;
int main(){
  cin>>n;
  for(int i=1;i<=n;i++){
    cin>>a;
    cnt[a]++;
    res+=i-cnt[a];}
  cout<<res;
}