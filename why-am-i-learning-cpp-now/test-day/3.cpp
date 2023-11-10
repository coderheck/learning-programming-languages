#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a,b,c;
    cin >> a >> b >> c;
    if(a+b+c==180){
        if(a==90){if (b+c==90){cout<<"VUONG CAN";}else{cout<<"VUONG";}}else
        if(b==90){if (a+c==90){cout<<"VUONG CAN";}else{cout<<"VUONG";}}else
        if(c==90){if (a+b==90){cout<<"VUONG CAN";}else{cout<<"VUONG";}}else
        if(a==b==c==60){cout<<"DEU";}else
        if(a==b or b==c or c==a){cout<<"CAN";}else{cout<<"THUONG";}
    }else{cout<<0;}
    return 0;
}