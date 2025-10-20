#include"iostream"
#include"vector"
using namespace std;
#define maxN 1000000
bool pr[maxN];int n;vector<int>nice;
void prSieve(){
  for (int i=2;i<=maxN;i++){pr[i]=true;}
  for (int i=2;i*i<=maxN;i++)
    if (pr[i]){
      for (int j=i*i;j<=maxN;j+=i){pr[j]=false;}
    }
}
int main(){
  prSieve();
  cin>>n;
  for(int i=2;i<=n/2;i++){if(pr[i]&&pr[n-i]&&(i!=n-i)){nice.push_back(i);}}
  cout<<nice.size()<<"\n";
  for(int i=0;i<nice.size();i++){cout<<nice[i]<<" "<<n-nice[i]<<"\n";}
}