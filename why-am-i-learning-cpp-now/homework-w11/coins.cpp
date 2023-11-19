#include <iostream>
#include <math.h>
#define ll long long
using namespace std;

int main(){
    int a, b, c, d;
    d=0;
    cin>>a>>b>>c;
    bool noway=true;
    for (int a1=0;a1<=a;a++){
        for (int b1=0;b1<=b;b++){
            if((a1*a) + (b1*b) == c){cout<<a<<" "<<b<<endl;}
        }
    }
    if(d!=0){cout<< -1;}
    return 0;
}