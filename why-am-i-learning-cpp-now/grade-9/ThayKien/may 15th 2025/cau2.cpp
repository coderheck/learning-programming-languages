#include<iostream>
using namespace std;
#define ll long long
ll a,b,c;
int main(){
  if(fopen("cau22.inp","r")){
    freopen("cau22.inp","r",stdin);
    freopen("cau22.out","w",stdout);
  }
  cin>>a>>b>>c;
  cout<<(b-a+1)-(b/c-(a-1)/c);
}
