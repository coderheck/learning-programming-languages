#include"iostream"
#include"algorithm"
using namespace std;
#define ll long long
#define maxN 1000000
int m,n,a[maxN],b[maxN],i=0,j=0,c=0;
int main(){
  cin>>n>>m;
  for(int i=0;i<n;i++){cin>>a[i];}
  for(int i=0;i<m;i++){cin>>b[i];}
  sort(a,a+n);sort(b,b+m);
  while(i<n&&j<m){
    if(a[i]>b[j]){c++;i++;j++;}else{i++;}
  }
  cout<<c;
}