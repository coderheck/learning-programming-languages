#include"iostream"
using namespace std;
#define maxN 3000000
int l,r,divs[maxN+5],a[maxN+5],chim=0;
void comp(){
  for(int i=1;i<=r/2;i++){
    for(int j=2*i;j<=maxN;j+=i){divs[j]+=i;}
  }
  for(int i=1;i<=r;i++){
    a[i]=a[i-1]+(divs[i]>i);
  }
}
int main(){
  cin>>l>>r;
  comp();
  cout<<a[r]-a[l-1];
}