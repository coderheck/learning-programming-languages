#include"iostream"
#include"string"
#include"algorithm"
#include"vector"
#define ull unsigned long long
using namespace std;
int main(){
  ull n;cin>>n;vector<ull>a(n);vector<string>b(n);
  for(ull i=0;i<n;i++){cin>>a[i];}
  for(ull i=0;i<n;i++){cin>>b[i];}
  for(ull i=0;i<n;i++){
    ull index=a[i]-1;
    cout<<b[index]<<" ";
  }
}
