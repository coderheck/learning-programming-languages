#include"iostream"
using namespace std;
#define ll long long
ll a,b,c,res;
int main(){
  cin>>a>>b>>c;res=a*b;
  if(res<a*c){res=a*c;}
  if(res<b*c){res=b*c;}
  cout<<res;
}