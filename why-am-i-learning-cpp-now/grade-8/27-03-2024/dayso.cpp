#include"iostream"
#include"math.h"
using namespace std;
bool nguyento(int n){
    bool nt=true;
    if(n<=1){nt=false;}
    for(int i=2;i<=n/2;i++){
        if(n%i==0){nt=false;}
    }
    return nt;
}
bool chinhphuong(int a){
    bool cp;
    if(floor(sqrt(a))==sqrt(a)&&ceil(sqrt(a))==sqrt(a)){cp=true;}else{cp=false;}
    return cp;
}
int main(){
  int n,scp=0,snt=0;cin>>n;
  for(int i=0;i<n;i++){int a;cin>>a;if(nguyento(a)==true){snt++;}if(chinhphuong(a)==true){scp++;}}
  cout<<scp<<"\n"<<snt;
}