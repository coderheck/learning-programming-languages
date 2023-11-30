#include <bits/stdc++.h>
using namespace std;
long long tien,nam,mot,hai,haichuc,namchuc;
int main(){
    cin >> tien;
    if (tien / 50 >= 1){
        namchuc = tien/50;
        cout << namchuc << " to 50" << endl;
    }
    if ((tien - namchuc) / 20 >= 1){
        haichuc = (tien - (namchuc*50)) / 20;
        cout << haichuc << " to 20";
    }
    if ((tien - (namchuc*50) - (haichuc*20)) / 5 >= 1){
        nam = (tien - (namchuc*50) - (haichuc*20)) / 5;
        cout << nam << " to 5" << endl;
    }
    if ((tien - (namchuc*50) - (haichuc*20) - (nam*5)) / 2 >= 1){
        hai = (tien - (namchuc*50) - (haichuc*20) - (nam*5)) / 2;
        cout << hai << "to 2" << endl;
    }
    if ((tien - (namchuc*50) - (haichuc*20) - (nam*5) - (hai*2)) / 1 >= 1){
        mot = (tien - (namchuc*50) - (haichuc*20) - (nam*5) - (hai*2)) / 1;
        cout << mot << " to 1";
    }
}