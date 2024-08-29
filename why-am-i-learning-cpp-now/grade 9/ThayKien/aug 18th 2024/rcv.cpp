#include"iostream"
#include"string"
#include"map"
#include"vector"
#include"algorithm"
using namespace std;
int n,m;string s;map<string,int>cnt;vector<int>pt;
int main(){
  cin>>n>>m;
  for(int i=1;i<=n;i++){cin>>s;cnt[s]++;}
  for(auto c:cnt){pt.push_back(c.second);}
  sort(pt.begin(),pt.end());
  int ptSize=pt.size();
  if(ptSize<=m){cout<<pt[0];}else{cout<<pt[ptSize-1-m];}
}
