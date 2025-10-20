#include<iostream>
using namespace std;
#define ll long long
ll max(const ll &a,const ll &b){return(a>b)?a:b;}
ll x,y,z,hypoten;
int main(){
  cin>>x>>y>>z;
  hypoten=max(x,max(y,z));
  if(hypoten==z){
    if(x*x+y*y==z*z){cout<<x+y+z;}else{cout<<-1;}
  }else if(hypoten==x){
    if(z*z+y*y==x*x){cout<<x+y+z;}else{cout<<-1;}
  }else{
    if(x*x+z*z==y*y){cout<<x+y+z;}else{cout<<-1;}
  }
}
