#include"iostream"
#include"cstdlib"
#include"ctime"
using namespace std;
#define maxN 200000
#define ll long long
int n,k;ll a[maxN+5];
int main(){
  cin>>n>>k;
  for(int i=0;i<n;i++){cin>>a[i];}
  srand(time(0));
  cout<<rand()%(1000000000+1);
}