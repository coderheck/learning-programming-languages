#include"cstdlib"
#include"ctime"
#include"iostream"
using namespace std;
int n;
int main(){
  if(fopen("sapxep.inp","r")){
    freopen("sapxep.inp","r",stdin);
    freopen("sapxep.out","w",stdout);
  }
  cin>>n;
  srand(time(0));
  cout<<rand()%(n+1);
}