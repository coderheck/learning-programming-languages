#include"iostream"
using namespace std;
#define maxN 1000000
int n,divs[maxN+5],res=0,maxdivs=0;
void preproc(){
  for(int i=1;i<=maxN/2;i++){
    for(int j=i*2;j<=maxN;j+=i){divs[j]++;}
  }
}
int main(){
  preproc();
  cin>>n;
  for(int i=1;i<n;i++){
    if(divs[i]>maxdivs){maxdivs=divs[i];res=i;}
  }
  cout<<res;
}