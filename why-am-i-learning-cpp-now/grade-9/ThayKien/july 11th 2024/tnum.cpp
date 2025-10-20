#include"iostream"
using namespace std;
long long demuoc(long long n){
  long long d=0;
  for(long long i=1;i*i<=n;i++){
    if(n%i==0){
      d++;
      long long j=n/i;
      if(j!=i){d++;}
    }
  }
  return d;
}
int main(){
  long long n;cin>>n;
  while(n--){
    long long a;cin>>a;
    if(demuoc(a)==3){cout<<"YES\n";}else{cout<<"NO\n";}
  }
}