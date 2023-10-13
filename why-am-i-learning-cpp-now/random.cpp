#include <iostream>
using namespace std;

int main(){
    long long int n, sum;
    sum = 0;
    cin >> n;
    for (long long int iter = n; iter>=1; iter--){
        sum += iter;
    }
    cout << sum;
    return 0;
}

// default snippet for all later code