#include "iostream"
using namespace std;
int l,r,pussy=0;
int main(){
  cin>>l>>r;
  for(int i=l+1;i<=r;i++){
    if (i<=12){
      (i-l>4)?pussy+=3:pussy+=6;
    }else if(i>12){
      (i-l>4)?pussy+=5:pussy+=10;
    }
  }
  cout<<pussy;
}