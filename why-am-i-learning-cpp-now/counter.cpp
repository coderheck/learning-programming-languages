#include"iostream"
#include"string"
using namespace std;
int main(){
  int i;cout<<"count from: ";cin>>i;
  while(true){
    string s;getline(cin,s);
    if(s.length()>=0){
      i+=1;
      cout<<"\n"<<i<<"\n\n";
    }
  }
}
