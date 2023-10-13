#include<iostream>
using namespace std;
int main()
{
    long long int n, sum;
    cin >> n;
    sum = 0;
    while (n>=0){
        sum += n;
        n -= 1;
    }
    cout << sum;
    return 0;
}