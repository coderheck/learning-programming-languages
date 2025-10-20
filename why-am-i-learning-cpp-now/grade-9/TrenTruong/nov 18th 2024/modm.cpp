#include"iostream"
#include"cstdlib"
#include"ctime"
using namespace std;
int n,m,a[100001];
int main(){
  cin>>n>>m;
  for(int i=0;i<n;i++){cin>>a[i];}
  srand(time(0));
  cout<<rand()%n+1;
}