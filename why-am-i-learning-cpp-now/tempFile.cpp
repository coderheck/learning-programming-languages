#include"iostream"
#define ll long long
using namespace std;
int main(){
  for(ll n=1;;n++){
    if( ((n-1) * ((n-1)+1)/2)<2024 && 2024<=n*(n+1)/2 ){cout<<n;break;}
  }
}
