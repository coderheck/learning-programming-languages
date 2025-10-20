#include<iostream>
#include<map>
#include<vector>
using namespace std;
#define ll long long
ll n,a;map<ll,ll>cnt;vector<ll>res;
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>n;
  while(n--){cin>>a;if(!cnt[a]){res.push_back(a);}cnt[a]++;}
  for(map<ll,ll>::iterator it=cnt.begin();it!=cnt.end();it++){
    cout<<it->first<<" ";
  }
}
