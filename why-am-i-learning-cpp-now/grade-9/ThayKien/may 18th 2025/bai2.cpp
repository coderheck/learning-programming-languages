#include<iostream>
using namespace std;
#define ll long long
ll a,b,uc;
int main(){
  cin>>a>>b;
  uc=b-a;
  cout<<(uc-a%uc)%uc;
}
