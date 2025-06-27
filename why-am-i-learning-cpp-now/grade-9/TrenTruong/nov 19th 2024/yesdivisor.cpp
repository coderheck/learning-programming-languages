#include"iostream"
#define maxN 10000000
using namespace std;
int n,k;
int divs[maxN+1];
void compDivs(){
  for(int i=1;i*i<=maxN;i++){
    for(int j=i*i;j<=maxN;j+=i){divs[j]++;}
  }
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  compDivs();
  cin>>n;
  cout<<divs[n];
}
