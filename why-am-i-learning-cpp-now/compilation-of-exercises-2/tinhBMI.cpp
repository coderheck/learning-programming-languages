#include <iostream>
using namespace std;

int main(){
    cout << "nhap chieu cao (m) va can nang (kg): ";
    float h, m, bmi;
    cin>>h>>m;
    bmi=m/(h*h);
    cout<<bmi<<endl;
    if(bmi<20){cout<<"gay";}else if(20<=bmi<25){cout<<"binh thuong";}else if(bmi>=25){cout<<"beo vai";}
    return 0;
}