#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long
ll n,s,a[105],c=0,i;
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>n>>s;
  for(i=0;i<n;i++){cin>>a[i];}
  sort(a,a+n);
  for(i=0;i<n;i++){
    if(s>=a[i]){s+=a[i];c++;}else{break;}
  }
  cout<<i;
}
