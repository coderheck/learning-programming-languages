#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long
ll a[10],d=0,r=0;
int main(){
  for(ll i=1;i<=4;i++){cin>>a[i];}
  sort(a+1,a+5);
  //d=a[0];
  //for(ll i=1;i<=4;i++){
    //if(d-a[i]>0){}
  //}
  cout<<a[1]*a[3];
}
