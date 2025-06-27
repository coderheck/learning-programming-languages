#include<iostream>
using namespace std;
#define ll long long
ll a,b,ucln;
int main(){
  cin>>a>>b;
  ucln=b-a;
  cout<<(ucln-a%ucln)%ucln;
}
