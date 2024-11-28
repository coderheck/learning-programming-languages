#include"iostream"
#include"string"
using namespace std;
string x,y="";int n;
void prRev(){for(int i=n-1;i>=0;i--){cout<<y[i];}}
void parse(){
  for(int i=0;i<n;i++){
    if(i%2==0){y+=x[i];}else{y=x[i]+y;}
  }
  if(n%2==0){cout<<y;}else{prRev();}
}
int main()
{
  cin>>x;
  n=x.size();
  parse();
}
