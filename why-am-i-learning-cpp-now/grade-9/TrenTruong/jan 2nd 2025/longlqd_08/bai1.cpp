#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
double a,b,c;
int main(){
  cin>>a>>b>>c;
  double h=sqrt(c*c-(b-a)/2*(b-a)/2);
  double r=h/4;
  cout<<fixed<<setprecision(2)<<h*(b-a)/2+a*h-(r*r*3.14);
  return 0;
}
