#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long
ll n,m,a[100005],si,fi;
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>n;
  for(ll i=0;i<n;i++){cin>>a[i];}
  sort(a,a+n);
  cin>>m;
  while(m--){
    cin>>si>>fi;
    cout<<(upper_bound(a,a+n,fi)-a)-(lower_bound(a,a+n,si)-a)<<"\n";
  }
}
