#include <iostream>
#include <cmath>
using namespace std;

long long digitsSum(long long arg){
    int n, sum; n=arg;
    while(n != 0){
        sum += pow(n%10, 3);
        n /= 10;
    }
    return sum;
}

int main(){
    long long n;
    cin>>n;

    return 0;
}