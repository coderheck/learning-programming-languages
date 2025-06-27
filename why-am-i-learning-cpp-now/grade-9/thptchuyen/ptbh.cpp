#include"iostream"
#include"cmath"
#define ld long double
using namespace std;
ld a,b,c,delta,x1,x2;
void evaluate(){
  if(delta<0){cout<<-1;}
  if(delta==0){cout<<3;}
  if(delta>0){
    x1=((0-b)+sqrt(delta))/(2*a);
    x2=((0-b)-sqrt(delta))/(2*a);
    if(((x1<0)&&(x1<0))||((x1>0)&&(x1>0))){cout<<1;}else{if(x1==0||x2==0){cout<<0;}else{cout<<2;}}
  }
}
int main(){
  cin>>a>>b>>c;
  delta=(b*b)-(4*a*c);
  evaluate();
}
