#include"iostream"
#include"iomanip"
#include"math.h"
#define ld long double
#define ll long long
using namespace std;
ld heron(ld a,ld b,ld c){
  ld s=(a+b+c)/2.0; // chia cho 2.0 moi dc
  return sqrt(s*(s-a)*(s-b)*(s-c)); // #include <cmath>
}
long double DTichDuongTronNoiTiepTGDeu(ld a){
  ld r = (a*sqrt(3))/6;
  return r*r*3.14;
}
int main(){
  if(fopen("area1.inp","r")){
    freopen("area1.inp","r",stdin);
    freopen("area1.out","w",stdout);
  }
  ld a;cin>>a;
  cout<<fixed<<setprecision(2)<<heron(a,a,a)-DTichDuongTronNoiTiepTGDeu(a);
}
