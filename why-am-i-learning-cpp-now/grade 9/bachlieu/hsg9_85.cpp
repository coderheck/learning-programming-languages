#include<iostream>
#include<vector>
#include<functional>
using namespace std;
#define ll long long
ll n,x,y,z,a,pi=0,ng=0,t=0;vector<ll>pos,neg,cuh;
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cuh.reserve(5);
  cin>>n;
  while(n--){cin>>a;if(a>0){pos.push_back(a);}else{neg.push_back(a);}}
  cin>>cuh[0]>>cuh[1]>>cuh[2];
  sort(neg.begin(),neg.end());
  sort(pos.begin(),pos.end(),greater<ll>());
  sort(cuh.begin(),cuh.end(),greater<ll>());
  for(ll i=0;i<3;i++){
    if(cuh[i]>0){
      t+=cuh[i]*pos[pi];pi++;
    }else{
      t+=cuh[i]*neg[ng];ng++;
    }
  }
  cout<<t;
}
