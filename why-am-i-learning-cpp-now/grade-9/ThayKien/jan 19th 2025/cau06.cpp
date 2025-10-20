#include"iostream"
#include"vector"
using namespace std;
#define maxN 1000000
int n,a;vector<int>sumd(maxN+5,0);
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  for(int i=1;i<=maxN;i++){
    for(int j=i;j<=maxN;j+=i){sumd[j]+=i;}
  }
  cin>>n;
  while(n--){
    cin>>a;
    cout<<(2*a<=sumd[a])<<"\n";
  }
}