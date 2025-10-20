#include"iostream"
#include"map"
using namespace std;
int a,b;
void run(){
  for(int i=a;i<=b;i++){
    map<int,int>d;
    int dc=0,i2=i;
    while(i!=0){
      d[i%10]++;
      i/=10;dc++;
    }
    if(d.size()==dc){cout<<i2;return;}else{i=i2;}
  }
  cout<<-1;
}
int main(){
  cin>>a>>b;
  run();
}