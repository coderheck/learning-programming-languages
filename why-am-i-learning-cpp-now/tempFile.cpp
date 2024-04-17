#include"iostream"
#include"algorithm"
#define ll long long
#define mod 1000000007
using namespace std;
int main(){
  ll a[5];bool nice=false;
  for(int i=0;i<5;i++){cin>>a[i];}
  for(int i=0;i<5;i++){
    int c=0;
    for(int j=0;j<5;j++){if(a[j]==a[i]){c++;}}
    if(c==4){nice=true;cout<<"YES";break;}
  }
  if(!nice){cout<<"NO";}
}
