#include"iostream"
using namespace std;
int t;
int main(){
  cin>>t;
  if(t==0||t==86400){cout<<"0 0 0";return 0;}
  cout<<t/3600<<" ";
  t%=3600;
  cout<<t/60<<" "<<t%60;
}