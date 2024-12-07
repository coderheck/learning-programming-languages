#include"iostream"
#include"algorithm"
#include"cmath"
const int N=1000;
using namespace std;
int a[1000],b[1000];
long long res=0;
int main(){
  freopen("d1.inp","r",stdin);
  for(int i=0;i<N;i++){cin>>a[i]>>b[i];}
  sort(a,a+N);sort(b,b+N);
  for(int i=0;i<N;i++){
    res+=abs(a[i]-b[i]);
  }
  cout<<res;
}