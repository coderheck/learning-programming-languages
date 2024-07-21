#include"iostream"
#include"string"
#include"vector"
using namespace std;
vector<string>mang;
int main(){
  for(int i=1;i<=5;i++){
    cin>>mang[i-1];
  }
  for(int i=0;i<5;i++){
    cout<<mang[i]<<"\n";
  }
}