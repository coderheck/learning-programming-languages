#include"bits/stdc++.h"
#define ll long long
using namespace std;
bool wtf(const pair<ll,ll> &a,const pair<ll,ll> &b)
{
  if(a.second!=b.second){return a.second>b.second;}else{return a.first<b.first;}
}
int main(){
  vector<pair<ll,ll>>vect;
  ll n;cin>>n;ll arr1[n],arr2[n];
  for(ll i=0;i<n;i++){
    cin>>arr1[i]>>arr2[i];
  }
  for(ll i=0;i<n;i++){vect.push_back(make_pair(arr1[i],arr2[i]));}
  sort(vect.begin(),vect.end(),wtf);
  for(ll i=0;i<n;i++){
    cout<<vect[i].first<<" "<<vect[i].second<<"\n";
  }
}

/*
3
101 80        305 90
305 90   ->   101 80
200 14        200 14

3
20 80        25 90
30 90   ->   30 90
25 90        20 80
*/