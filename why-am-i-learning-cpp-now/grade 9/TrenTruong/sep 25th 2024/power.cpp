#include"iostream"
#include"unordered_map"
using namespace std;
#define ll long long
ll n,k,b[100000],kien=0;
unordered_map<int,int>res;
bool isPowK(ll a){
  unordered_map<int,int>cnt;
  while(a%2==0){cnt[2]++;a/=2;}
  for(int i=3;i*i<=a;i+=2){
    while(a%i==0){cnt[i]++;a/=i;}
    if(a>2){cnt[a]++;}
  }
  for(auto i:cnt){
    if(i.second%k!=0){return false;}
  }
  return true;
}
int main(){
  if(fopen("power.inp","r")){
    freopen("power.inp","r",stdin);
    freopen("power.out","w",stdout);
  }
  cin>>n>>k;
  for(int i=0;i<n;i++){cin>>b[i];}
  for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
      if(isPowK(b[i]*b[j])){res[b[i]*b[j]]++;}
    }
  }
  cout<<res.size();
  for(auto i:res){
    if(i.second!=0){kien++;}
  }
  cout<<kien;
}