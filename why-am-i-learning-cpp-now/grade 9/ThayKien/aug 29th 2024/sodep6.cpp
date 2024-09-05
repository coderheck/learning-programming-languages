#include"iostream"
#include"vector"
using namespace std;
#define maxN 1000000
bool pr[maxN];int n,k;vector<int>sumdivs(maxN,0);
int main(){
  for(int i=1;i<=maxN;i++){
    for(int j=i;j<=maxN;j+=i){sumdivs[j]+=i;}
  }
  cin>>n;
  for(int i=1;i<=n;i++){
    cin>>k;cout<<(2*k<=sumdivs[k])<<"\n";
  }
}
