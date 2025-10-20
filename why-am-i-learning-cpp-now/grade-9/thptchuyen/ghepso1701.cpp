#include"iostream"
#include"algorithm"
#include<vector>
using namespace std;
bool ispr(int n){
  if(n<2){return false;}
  if(!(n&1)){return false;}
  for(int i=3;i*i<=n;i+=2){
    if(n%i==0){return false;}
  }
  return true;
}
int n,a[10],s;bool used[10],save;
void permutePrimes(int d){
  for(int i=0;i<n;i++){
    if(used[i]==0){
      used[i]=1;
      s=s*10+a[i];
      permutePrimes(d+1);
      s/=10;
      used[i]=0;
    }
  }
  if(d==n&&ispr(s)){cout<<s<<"\n";save=1;}
}
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin>>n;
  for(int i=0;i<n;i++){cin>>a[i];}
  sort(a,a+n);
  permutePrimes(0);
  if(save==0)cout<<-1;
}