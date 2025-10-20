#include"iostream"
#include"vector"
#include"algorithm"
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int n;cin>>n;
  vector<int>perm;
  for(int i=1;i<=n;i++){perm[i-1]=i;}
  sort(perm.begin(),perm.end());
  do{
    for(int i=0;i<n;i++){cout<<perm[i];}
    cout<<"\n";
  }while(next_permutation(perm.begin(),perm.end()));
}
