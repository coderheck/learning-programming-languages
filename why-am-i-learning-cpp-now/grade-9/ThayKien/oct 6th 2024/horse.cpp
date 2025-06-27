#include"iostream"
#include"algorithm"
using namespace std;
#define ll long long
#define maxN 100000
int n,c=0;ll a[maxN],b[maxN];
int main(){
  cin>>n;
  for(int i=0;i<n;i++){cin>>a[i];}
  for(int i=0;i<n;i++){cin>>b[i];}
  sort(a,a+n);sort(b,b+n);
  int j=0;
  for(int i=0;i<n;i++){
    if(a[i]>b[j]){
      c++;j++;
    }
    if(j==n){break;}
  }
  cout<<c;
}