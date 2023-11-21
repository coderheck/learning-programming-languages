#include <iostream>
#include <math.h>
#define ll long long
using namespace std;

int main(){
    int a, b, c, d;
    d=0;
    cin>>a>>b>>c;
    for (int a1=1;a1<=c-1;a++){
        for (int b1=1;b1<=c-1;b++){
            if( (a * a1) + (b * b1) == c){d=d+1;continue;}else continue; //theres no way this didnt work
        }
    }
    cout<<d;
    return 0;
}