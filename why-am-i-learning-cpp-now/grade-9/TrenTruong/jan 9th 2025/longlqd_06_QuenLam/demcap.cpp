#include"iostream"
using namespace std;
#define ll long long
int n;
ll res=0,c=0,l=0,a;
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin>>n;
  for(int i=1;i<=n;i++){
    cin>>a;
    (a&1)?l++:c++;
  }
  cout<<c*(c-1)/2+l*(l-1)/2;
}