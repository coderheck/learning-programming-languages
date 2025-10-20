#include"iostream"
using namespace std;
#define ll long long
ll x,y;
int main(){
  cin>>x;y=x;
  while(x!=0){y+=x%10;x/=10;}
  cout<<y;
}