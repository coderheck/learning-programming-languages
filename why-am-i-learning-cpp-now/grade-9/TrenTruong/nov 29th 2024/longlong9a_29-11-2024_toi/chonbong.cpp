#include"iostream"
using namespace std;
#define maxN 200000
int n,k,a[maxN+5],csum[maxN+5],max1=0,max2=0;
int main(){
  cin>>n>>k;
  for(int i=0;i<n;i++){
    int c;cin>>c;
    csum[c]++;
  }
  for(int i=1;i<=k;i++){
    if(csum[i]>max1){
      max2=max1;max1=csum[i];
    }else if(csum[i]>max2){
      max2=csum[i];
    }
  }
  cout<<max1+max2;
}