#include<iostream>
using namespace std;
#define ll long long 
ll a,b,c;
void parse(){
  ll d=c-b,r=c/b;
  if(d==b-a){
    cout<<"AP "<<c+d<<"\n";
  }else if(r=b/a){
    cout<<"GP "<<c*r<<"\n";
  }
}
int main(){
  cin.tie(0)->sync_with_stdio(0);
  while(cin>>a>>b>>c){
    if(!a&&!b&&!c){
      return 0;
    }else{
      parse();
    }
  }
}
