#include"iostream"
#include"math.h"
using namespace std;
int main(){
    int x,y; string d;
    cout<<"nhap so dau tien: "; cin>>x;
    cout<<"nhap so thu hai: ";cin>>y;
    cout<<"phep toan: ";cin>>d;
    cout<<"ket qua: ";
    if(d=="+"){cout<<x+y;}else if(d=="-"){cout<<x-y;}else if(d=="*"){cout<<x*y;}else if(d=="/"){cout<<x/y;}
}
