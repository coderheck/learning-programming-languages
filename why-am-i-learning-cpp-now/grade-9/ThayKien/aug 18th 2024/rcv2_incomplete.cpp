#include"iostream"
#include"string"
#include"map"
#include"vector"
using namespace std;
int n,m,k,sex=0;
map<string,int>revive;
int main(){
  cin>>n>>m>>k;
  for(int i=1;i<=n;i++){
    string name;cin>>name;
    revive[name]++;
  }
  for(int i=1;i<=m;i++){
    string name;cin>>name;
    if(revive[name]==1){revive[name]++;}
  }
  for(int i=1;i<=k;i++){
    string name;cin>>name;
    if(revive[name]==2){revive[name]++;}
  }
  for(auto c:revive){if(c.second==3){sex++;}}
  cout<<sex;
}
