#include"iostream"
using namespace std;
#define maxN 1000000
int n,a,sumdiv[maxN+1];
void sumOfDivs(){
  for(int i=1;i<=maxN;i++){sumdiv[i]=1;}
  sumdiv[0]=0;
  for(int i=2;i<=maxN;i++){
    for(int j=i;j<=maxN;j+=i){sumdiv[j]+=i;}
  }
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  sumOfDivs();
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a;
    cout<<(2*a<=sumdiv[a])<<"\n";
  }
}