#include"iostream"
using namespace std;
#define ll long long
int n,res=0,l=0,c=0,a;
ll t=0;
int main(){
  cin>>n;
  while(n--){
    cin>>a;t+=a;
    (a&1)?l++:c++;
  }
  if(t&1){
    cout<<l*c;
  }else{
    cout<<c*(c-1)/2+l*(l-1)/2;
  }
}