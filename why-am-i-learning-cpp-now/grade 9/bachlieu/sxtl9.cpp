#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;
#define ll long long
int n,c=0;ll a[1000005],milk=0;
int main(){
  cin.tie(0)->sync_with_stdio(0);
  cin>>n;
  for(int i=0;i<n;i++){cin>>a[i];}
  sort(a,a+n,greater<ll>());
  for(int i=0;i<n;i++){
    milk+=max(0LL,a[i]-c);c++;
  }
  cout<<milk;
}