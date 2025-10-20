#include"iostream"
#include"string"
using namespace std;
#define ll long long
#define maxN 100000
int n,l=0,r=0;string s;
ll sum[maxN+5],k,res=0;
int main(){
  cin>>n>>k;
  cin>>s;
  sum[0]=s[0];
  for(int i=1;i<n;i++){sum[i]=sum[i-1]+s[i];}
  while(l<n&&r<n){
    if(sum[r]-sum[l-1]>=k){
      res+=n-r;
      l++;
    }else{r++;}
  }
  cout<<res;
}