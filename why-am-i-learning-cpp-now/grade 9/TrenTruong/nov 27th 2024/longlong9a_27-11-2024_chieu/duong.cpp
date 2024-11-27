#include"iostream"
using namespace std;
#define ll long long
ll n,five=0,three=0;
int main(){
  cin>>n;
  five=n/5;n-=5*five;
  three=n/3;n-=3*three;
  (n>0)?cout<<-1:cout<<five+three;
}