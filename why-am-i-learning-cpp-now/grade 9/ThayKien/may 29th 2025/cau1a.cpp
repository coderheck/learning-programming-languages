#include<iostream>
using namespace std;
#define ll long long
ll a,c,b,d;
ll max(){return(c>d)?c:d;}
int main(){
  cin>>a>>b;
  while(a){c=c*10+a%10;a/=10;}
  while(b){d=d*10+b%10;b/=10;}
  cout<<max();
}
