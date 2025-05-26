#include<iostream>
using namespace std;
#define ll long long
#define maxA 1000000
ll n,a,f=0;bool fb[maxA+5];
void fiboPrecomp(){
  ll l=1,r=1,c=0;
  fb[1]=fb[2]=true;
  while(1==1){
    c=l+r;
    if(c>maxA){return;}
    fb[c]=true;
    l=r;r=c;
  }
}
int main(){
  fiboPrecomp();
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>n;
  while(n--){
    cin>>a;
    if(fb[a]){cout<<a<<" ";f++;}
  }
  if(!f){cout<<0;}
  cout<<"\n";
}
