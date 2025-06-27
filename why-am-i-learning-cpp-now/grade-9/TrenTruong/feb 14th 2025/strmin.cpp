#include"iostream"
#include"string"
using namespace std;
int n,x,y,z,numc=0,lc=0,uc=0;
char niter='0',liter='a',uiter='A';
string num,l,u;
int main(){
  cin>>n>>x>>y>>z;
  while(z--&&niter<='9'){num.push_back(niter);niter+=(niter&1)?-1:1;numc++;}
  while(x--&&uiter<='Z'){u.push_back(uiter);uiter+=(uiter&1)?1:-1;uc++;}
  while(y--&&liter<='z'){u.push_back(liter);liter+=(liter&1)?1:-1;lc++;}
  if(numc+uc+lc==n){
    cout<<num<<u<<l;
  }else{
    while(niter<='9'&&n-numc-lc-uc){num.push_back(niter);niter+=(niter&1)?-1:1;numc++;}
    while(uiter<='Z'&&n-numc-lc-uc){u.push_back(uiter);uiter+=(uiter&1)?1:-1;uc++;}
    while(liter<='z'&&n-numc-lc-uc){u.push_back(liter);liter+=(liter&1)?1:-1;lc++;}
    cout<<num<<u<<l;
  }
}