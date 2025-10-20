#include"iostream"
using namespace std;
int t,n;
int tcs(int arg){
  int r=0;
  while(arg!=0){
    r+=(arg%10);
    arg/=10;
  }
  return r;
}
void compute(){
  int r=tcs(n);
  while(r>=10){
    r=tcs(r);
  }
  cout<<r<<'\n';
}
int main(){
  cin>>t;
  while(t--){
    cin>>n;
    compute();
  }
}