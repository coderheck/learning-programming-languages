#include<iostream>
using namespace std;
#define ll long long
ll a,b,d;
int main(){
  cin>>a>>b;d=b-a;
  cout<<(d-(a%d))%d;
}