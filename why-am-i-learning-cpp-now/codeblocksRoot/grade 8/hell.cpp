#include "iostream"
#include "iomanip"
using namespace std;

int main(){
    float i,sum;
    i=sum=1;
    do {
        sum=sum+1.0/i;i++;
    }
    while (1.0/i>=1e-4);
    cout<<setprecision(4)<<sum;
    return 0;
}
