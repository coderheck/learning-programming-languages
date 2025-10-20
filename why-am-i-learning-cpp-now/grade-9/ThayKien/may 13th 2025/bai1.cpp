#include<iostream>
using namespace std;
#define ll long long
ll a,b,ucln,res;
int main(){
  cin>>a>>b;
  ucln=b-a;
  if(ucln<0){cout<<0;return 0;}
  cout<<(ucln-a%ucln)%ucln;
}
