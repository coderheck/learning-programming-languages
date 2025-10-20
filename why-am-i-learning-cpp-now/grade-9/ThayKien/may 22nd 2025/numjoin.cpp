#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long
bool cmpfn(const string &a,const string &b){return a>b;}
ll n;vector<string>res;string a;
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>n;
  for(ll i=0;i<n;i++){cin>>a;res.push_back(a);}
  sort(res.begin(),res.end(),cmpfn);
  for(ll i=0;i<n;i++){cout<<res[i];}
}
