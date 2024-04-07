#include"iostream"
#define ll long long
using namespace std;
int main(){
  int x;cin>>x;ll t=0;
  if(x<=100){t+=x*2000;}else
  if(x>100 && x<=200){t+=2000*100+3000*(x-100);}else
  if(x>200 && x<=300){t+=2000*100+3000*100+5000*(x-200);}else
  if(x>300){t+=2000*100+3000*100+5000*100+10000*(x-300);}
  cout<<t;
}
