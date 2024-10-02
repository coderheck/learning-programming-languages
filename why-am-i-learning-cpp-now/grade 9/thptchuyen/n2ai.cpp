#include"iostream"
#include"algorithm"
using namespace std;
#define maxN 100001
int a[maxN],n;
int main(){
  cin>>n;
  for(int i=0;i<2*n;i++){cin>>a[i];}
  sort(a,a+n);
  sort(a+n+1,a+(2*n),greater<int>());
  for(int i=0;i<2*n;i++){cout<<a[i]<<" ";}
}