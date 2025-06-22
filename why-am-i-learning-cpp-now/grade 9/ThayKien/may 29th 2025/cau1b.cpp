#include<iostream>
using namespace std;
#define ll long long
ll q,n;
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>q;
  while(q--){
    cin>>n;
    cout<<n/3+n/7-n/21<<"\n";
  }
}
