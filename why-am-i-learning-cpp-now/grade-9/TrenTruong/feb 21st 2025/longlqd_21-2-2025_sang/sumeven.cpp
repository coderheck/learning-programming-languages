#include<iostream>
#include<string>
using namespace std;
int n,v[5],s=0;string a;long long res=0;
int main(){
  cin.tie(0)->sync_with_stdio(0);
  cin>>n;v[0]=1;
  while(n--){
    cin>>a;
    s=(s+a[a.size()-1]%2)%2;
    res+=v[s];v[s]++;
  }
  cout<<res;
}