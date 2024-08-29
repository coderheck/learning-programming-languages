#include"iostream"
#include"vector"
using namespace std;
#define maxN 1000000
int main(){
  vector<int>divs(maxN+1,0);
  for(int i=1;i<=maxN;i++){
    for(int j=i;j<=maxN;j+=i){divs[j]++;}
  }
  cout<<divs[12792];
}
