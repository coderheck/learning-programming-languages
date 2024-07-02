#include"iostream"
#include"math.h"
#include"iomanip"
#define ld long double
using namespace std;
ld pytagoA(ld b, ld c){
    return (sqrt(c*c-b*b));
}
ld chieuCaoHinhThang(ld a, ld b, ld c){
    ld b1=b-a;
    return sqrt((c*c)-(b1*b1));
}
ld dtHTron(ld bk){
    return(bk*bk*3.14);
}
ld dtHThang(ld a, ld b, ld h){
    return h * ((a+b)/2);
}
int main(){
    ld a,b,c;cin>>a>>b>>c;
    ld h=chieuCaoHinhThang(a,b,c);
    cout<<h<<"\n";
    cout<<setprecision(2)<<dtHThang(a,b,h);//-dtHTron(h/4);
}