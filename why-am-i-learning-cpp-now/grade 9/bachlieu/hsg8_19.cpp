#include<iostream>
using namespace std;
#define ll long long
ll max(const ll &a,const ll &b){return(a>b)?a:b;}
ll min(const ll &a,const ll &b){return(a<b)?a:b;}
ll a,b,c,firstmax;
int main(){
  cin>>a>>b>>c;
  firstmax=max(a,max(b,c));
  if(firstmax==a){
    cout<<min(b,c)<<" "<<max(b,c)<<" "<<a;
  }else if(firstmax==b){
    cout<<min(a,c)<<" "<<max(a,c)<<" "<<b;
  }else{
    cout<<min(a,b)<<" "<<max(a,b)<<" "<<c;
  }
}
