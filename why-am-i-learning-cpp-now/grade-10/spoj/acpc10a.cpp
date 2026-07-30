#include<iostream>
using namespace std;
#define ll long long 
ll a,b,c;
void parse(){
  ll d=c-b;
  if(d==b-a){
    cout<<"AP "<<c+d<<"\n";
  }else if(c/b==b/a){
    cout<<"GP "<<c*(c/b)<<"\n";
  }
}
int main(){
  cin.tie(0)->sync_with_stdio(0);
  while(cin>>a>>b>>c){
    if(a==0&&b==0&&c==0){
      return 0;
    }else{
      parse();
    }
  }
}
