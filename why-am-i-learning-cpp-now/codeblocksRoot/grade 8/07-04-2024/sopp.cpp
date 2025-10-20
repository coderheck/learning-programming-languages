#include"iostream"
#define ll long long
using namespace std;
unsigned long long tonguoc(unsigned long long n){
    unsigned long long t=0;
    for(unsigned long long i=1;i*i<=n;i++){
        if(n%i==0){
          t+=i;
	        unsigned long long j=n/i;
	        if(j!=i){t+=j;}
        }
    }
	return t;
}
int main(){
  ll n;cin>>n;
  if(n<tonguoc(n)-n){cout<<true;}else{cout<<false;}
}
