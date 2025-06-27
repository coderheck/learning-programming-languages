#include"iostream"
#include"cmath"
#include"algorithm"
typedef long long ll;
using namespace std;
int r,hell=0;
int main(){
  cin>>r;
  for(int x=r-1;x>=1;x--){
    int y=sqrt(r*r-x*x);
    if(x*x+y*y<=r*r){
      hell=max(hell,4*x*y);
    }
  }
  cout<<hell;
}