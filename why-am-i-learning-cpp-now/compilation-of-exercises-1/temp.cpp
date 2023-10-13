#include <iostream>
using namespace std;

int main(){
    long long n, iter, two, five;
    two = five = 0;
    cout << "enter amount of usd to pay:" << endl;
    cin >> n;
    if (n>=2 and n>=5){
        for (iter=n; iter<=0; iter-2){
            if (iter-2>=0){
                two+=1;
            }
        }
    }
    cout << two << " steps for using just 2 usd" << endl;
    cout << five << " steps for using just 5 usd" << endl;
    return 0;
}

// default snippet for all later code