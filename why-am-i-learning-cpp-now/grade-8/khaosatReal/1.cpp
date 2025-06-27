#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    float n,sum;
    sum=0;
    cin>>n;
    for (int n1=1; n1<=n; n1++){
        sum = sum + 1.0 / pow(n1, 2);
    }
    cout<<setprecision(5)<<sum;
    return 0;
}
