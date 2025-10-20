#include <iostream>
#include <math.h>
#include <iomanip>
#include <string>
using namespace std;

int main(){
    long int n, n1, digits;
    digits=0;
    cin>>n;
    while(n>=10){
        n1=n=n/10;
        digits+=1;
        cout<<n1<<" ";
    }
    return 0;
}