#include"iostream"
using namespace std;
int n,a[10005],perfectres=0;
void subarray(){
  int res=1,curL=1;
  for(int i=1;i<n;i++){
    if(a[i]>a[i-1]){curL++;}else{
      if(res<curL){res=curL;}
      curL=1;
    }
  }
  if(res<curL){res=curL;}
  cout<<res;
}
int main(){
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a[i];
    perfectres+=(a[i]==6||a[i]==28||a[i]==496);
  }
  cout<<perfectres<<"\n";
  subarray();
}