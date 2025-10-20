#include"iostream"
using namespace std;
#define ll long long
ll r,c;ll row[2][5]={{0,2,4,6,8},{1,3,5,7,9}};
int main(){
  cin>>r>>c;
  cout<<(r/2+(r&1)-1)*10+row[!(r&1)][c-1];
}
// if r%2==0 then the target row is composed of even numbers, else they are 
// all odd numbers
// row[!(r&1)][c-1]