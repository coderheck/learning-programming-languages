#include"iostream"
using namespace std;
int n,k,s;
int main(){
  cin>>n>>k;
  s=n*2;
  cout<<(s+k-1)/k*3;
}