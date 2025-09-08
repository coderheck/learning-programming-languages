#include<iostream>
using namespace std;
#define ll long long 
ll n,x,y;
int main(){
  cin.tie(0)->sync_with_stdio(0);
  cin>>n;
  while(n--){
    cin>>x>>y;
    if(x==y){
      cout<<(x<<1)-(x&1)<<"\n";
    }else if(x-y==2){
      cout<<x+y-(x&1)<<"\n";
    }else{
      cout<<"No Number\n";
    }
  }
}
