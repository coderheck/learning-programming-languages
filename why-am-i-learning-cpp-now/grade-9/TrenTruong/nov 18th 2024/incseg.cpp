#include"iostream"
using namespace std;
#define ll long long
const int maxn=100000;
int n,maxL=1,len=1;ll a[maxn+1];
int main(){
  cin>>n;
  for(int i=0;i<n;i++){cin>>a[i];}
  for(int i=1;i<n;i++){
    if(a[i]>=a[i-1]){
      len++;
    }else{
      maxL=(maxL<len)?len:maxL;
      len=1;
    }
  }
  if(maxL<len){maxL=len;}
  cout<<maxL;
}