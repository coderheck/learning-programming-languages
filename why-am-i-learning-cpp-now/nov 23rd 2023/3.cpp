#include <iostream>
#include <cmath>
using namespace std;

long long digitsSum(long long arg){
    int n, sum; n=arg;
    while(n != 0) {
        sum += n%10;
        n /= 10;
    }
}

int main(){
    long long n;
    cin>>n;
    
    return 0;
}