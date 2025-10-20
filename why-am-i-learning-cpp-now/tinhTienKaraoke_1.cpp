#include<bits/stdc++.h>
using namespace std;
int main()
{
cout<< "Ban hat tu luc nao? =>";
int start(0);
cin>> start;
cout<< "Ban hat xong luc nao? =>";
int end(0);
cin>> end;
int tg(0);
tg=end-start;
int money(0);
    if (start>=8&&end<=24){
        if (tg<=3) {
            money=30000*tg;
        };
        if (tg>3) {
            money=90000+(tg-3)*21000;
        };
        if (start>=8&&end<=17){
            money=money/10*9;
        }
        cout<< "So tien ban phai tra la: " << money;
    }
    else{
    cout<< "Gio hat khong hop le!";
    };
    return 0;
}