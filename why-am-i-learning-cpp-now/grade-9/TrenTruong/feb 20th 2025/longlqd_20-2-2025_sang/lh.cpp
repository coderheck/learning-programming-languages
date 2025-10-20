#include"iostream"
#include"cmath"
using namespace std;
long long n,x,y,c=0;double a,r;
int main(){
  cin>>n>>x>>y; // dishes, table radius, dish radius
  // if(y>x){cout<<"NO";return 0;}
  // r=y/(double)(x-y);
  // if(x<2*y){
  //   c=1;
  // }else{
  //   a=abs(asin(r)*180)/3.141549265;
  //   c=360/2*floor(a);
  // }
  // if(c>=n){cout<<"YES";}else{cout<<"NO";}
  if((x*x>n*y*y)&&(3.141592654*x)>n*y){cout<<"YES";}else{cout<<"NO";}
}