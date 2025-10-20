#include"iostream"
using namespace std;
#define ll long long
#define maxN 100000
int t,n;ll a[maxN+5];
int main(){
  cin>>t;
  while(t--){
    cin>>n;
    for(int i=0;i<n;i++){cin>>a[i];}
    int ans=0;ll maxn=LLONG_MIN;
    for(int i=0;i<n;i++){
      if(a[i]>maxn){ans++;maxn=a[i];}
    }
    if(ans%2==1){cout<<"BOB\n";}else{cout<<"ANDY\n";}
  }
}