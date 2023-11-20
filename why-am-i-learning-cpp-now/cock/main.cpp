#include <iostream>
#include <math.h>
#define ll long long
using namespace std;

int main(){
    int a, b, c, d;
    d=0;
    cin>>a>>b>>c;
    for (int a1=1;a1<=c;a++){
        for (int b1=1;b1<=c;b++){
            if( (a * a1) + (b * b1) == c){d=d+1;}
        }
    }
    cout<<d;
    return 0;
}
