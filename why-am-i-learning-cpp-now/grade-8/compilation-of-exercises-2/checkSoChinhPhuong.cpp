#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a;
    cin >> a;
    if (floor(sqrt(a))==sqrt(a) and ceil(sqrt(a))==sqrt(a)){cout<<"yes";}else{cout<<"no";}
    return 0;
}