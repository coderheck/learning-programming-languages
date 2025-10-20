#include<iostream>
using namespace std;
#define ll long long
ll n,ful,rem;
int main(){
  cin>>n;
  ll fullgroup=n/5,remgroup=n%5;
  ful=5*30*fullgroup*(fullgroup+1)/2;
  rem=remgroup*30*(fullgroup+1);
  cout<<ful+rem;
}
