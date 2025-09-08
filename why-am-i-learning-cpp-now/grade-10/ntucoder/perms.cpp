#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
string s;int n;vector<string>res;
int main(){
  cin.tie(0)->sync_with_stdio(0);
  cin>>n;
  s.reserve(10);
  for(char c='1';c<=n+'0';c++){s+=c;}
  res.push_back(s);
  while(next_permutation(s.begin(),s.end())){res.push_back(s);}
  sort(res.begin(),res.end());
  cout<<res.size()<<"\n";
  for(string& ress:res){cout<<ress<<"\n";}
}
