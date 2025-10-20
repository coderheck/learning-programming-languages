#include"iostream"
#include"vector"
using namespace std;
#define maxN 1000000
int sumdiv[maxN];
int n,a;
int main(){
  for(int i=1;i<=maxN;i++){
    for(int j=i;j<=maxN;j+=i){sumdiv[j]+=i;}
  }
  cin>>n;
  while(n--){
    cin>>a;
    cout<<(2*a<=sumdiv[a])<<"\n";
  }
}