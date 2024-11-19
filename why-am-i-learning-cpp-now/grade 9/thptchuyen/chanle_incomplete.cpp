#include"iostream"
#include"algorithm"
using namespace std;
#define ll long long
ll l,r,ta,tb,even,odd;
int main(){
  cin>>l>>r;
  even=(r+1-l)/2;odd=r+1-l-even;
  cout<<even<<" "<<odd;
}