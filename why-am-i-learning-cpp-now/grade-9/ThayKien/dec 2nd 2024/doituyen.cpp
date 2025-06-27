#include"iostream"
using namespace std;
#define ll long long
ll x,y,z,lol;
int main(){
  cin>>x>>y>>z;
  lol=(y+z)-x;
  if(lol>=0){cout<<lol;}else{cout<<"None";}
}