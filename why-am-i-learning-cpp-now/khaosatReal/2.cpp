#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    float chuvi, dientich;
    float a, b;
    cin>>chuvi;
    a=(chuvi/2)/2;
    b=(chuvi/2)/2;
    dientich=a*b;
    cout<<setprecision(4)<<dientich;
    return 0;
}