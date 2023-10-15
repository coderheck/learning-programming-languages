#include <iostream>
using namespace std;

int main(){
    long long n, iter, two, five, n2, n5;
    two = five = 0;
    cout << "enter amount of usd to pay:" << endl;
    cin >> n;
    for (iter = n; iter >= 1; iter -= 2){
        two += 1;
    }
    for (iter = n; iter >= 4; iter -= 5){
        five += 1;
    }
    cout << two << " time(s) 2 usd" << endl;
    cout << "or" << endl;
    cout << five << " time(s) 5 usd" << endl;
    return 0;
}

// default snippet for all later code