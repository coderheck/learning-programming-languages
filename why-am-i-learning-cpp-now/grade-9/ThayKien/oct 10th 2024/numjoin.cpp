#include"iostream"
#include"algorithm"
#include"string"
#include"vector"
using namespace std;
#define ll long long
int n;string s,a;vector<string>inp;
bool cmpfn(string a,string b){
  return a+b>b+a;
}
int main(){
  if(fopen("numjoin.inp","r")){
    freopen("numjoin.inp","r",stdin);
  }
  cin>>n;
  while(n--){cin>>a;inp.push_back(a);}
  sort(inp.begin(),inp.end(),cmpfn);
  for(auto i:inp){cout<<i;}
}