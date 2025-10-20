#include<iostream>
#include<algorithm>
#define ull unsigned long long
using namespace std;
int main(){
  if(fopen("bai8.inp","r")){
    freopen("bai8.inp","r",stdin);
    freopen("bai8.out","w",stdout);
  }
  int n;string s;ull dem=0;cin>>n>>s;
  for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
      string tmp;tmp=s.substr(i-1,j-i);
      if( count(tmp.begin(),tmp.end(),'0') == count(tmp.begin(),tmp.end(),'1') ){dem++;dem%=1000000007;}
    }
  }
  cout<<dem;
}
