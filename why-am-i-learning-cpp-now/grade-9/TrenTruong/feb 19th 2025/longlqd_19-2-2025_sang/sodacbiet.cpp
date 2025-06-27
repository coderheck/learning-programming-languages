#include"iostream"
using namespace std;
bool allOddDigits(int n){
  int d;
  while(n!=0){d=n%10;if(!(d&1)){return false;}n/=10;}
  return true;
}
int n,a[100005],res=1,curL=1;
int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a[i];a[i]=allOddDigits(a[i]);
  }
  for(int i=1;i<n;i++){
    if(a[i]==a[i-1]&&a[i]){curL++;}else{
      if(res<curL){res=curL;}
      curL=1;
    }
  }
  if(res<curL){res=curL;}
  cout<<res;
}