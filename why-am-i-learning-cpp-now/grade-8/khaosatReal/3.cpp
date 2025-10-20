#include <bits/stdc++.h>
using namespace std;
long long tien,nam,mot,hai,haimuoi,nammuoi;
int main(){
    cin >> tien;
    if (tien / 50 >= 1){
        nammuoi = tien/50;
        cout << nammuoi << " to 50" << endl;
    }
    if ((tien - nammuoi) / 20 >= 1){
        haimuoi = (tien - (nammuoi*50)) / 20;
        cout << haimuoi << " to 20";
    }
    if ((tien - (nammuoi*50) - (haimuoi*20)) / 5 >= 1){
        nam = (tien - (nammuoi*50) - (haimuoi*20)) / 5;
        cout << nam << " to 5" << endl;
    }
    if ((tien - (nammuoi*50) - (haimuoi*20) - (nam*5)) / 2 >= 1){
        hai = (tien - (nammuoi*50) - (haimuoi*20) - (nam*5)) / 2;
        cout << hai << "to 2" << endl;
    }
    if ((tien - (nammuoi*50) - (haimuoi*20) - (nam*5) - (hai*2)) / 1 >= 1){
        mot = (tien - (nammuoi*50) - (haimuoi*20) - (nam*5) - (hai*2)) / 1;
        cout << mot << " to 1";
    }
}