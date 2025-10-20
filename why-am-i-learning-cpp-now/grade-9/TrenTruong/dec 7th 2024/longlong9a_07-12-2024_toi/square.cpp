#include"iostream"
#include"cmath"
using namespace std;
const int maxN=10000000;
int cnt[maxN+5],n,k;
bool securecontainprotect(int x){
  int sq=sqrt(x);
  return(sq*sq==x);
}
void preproc(){
  for(int i=1;i<=maxN;i++){
    cnt[i]=cnt[i-1]+securecontainprotect(i);
  }
}
int main(){
  preproc();
  cin>>n>>k;
  cout<<cnt[n]-cnt[k-1];
}