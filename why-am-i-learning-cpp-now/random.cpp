#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int Ox, Oy, R, Ax, Ay;
    float OA;
    cout << "nhap toa do tam O va ban kinh R (thu tu: Ox -> Oy -> ban kinh R)" << endl;
    cin >> Ox >> Oy >> R;
    cout << "nhap toa do diem A (thu tu: Ax -> Ay)" << endl;
    cin >> Ax >> Ay;
    cout << "do dai OB, AB la:" << endl;
    cout << "OB: " << Ax - Ox << ", AB: " << Ay - Oy << endl;
    OA = sqrt((Ax-Ox)*(Ax-Ox)+(Ay-Oy)*(Ay-Oy));
    cout << "do dai OA la: " << OA << endl;
    if (OA > R){
        cout << "diem A nam ngoai duong tron";
    }else if (OA < R){
        cout << "diem A nam trong duong tron";
    }else if (OA = R){
        cout << "diem A nam tren duong tron";
    }else{cout << "dude wtf";}
    return 0;
}
//lol okay i used the wrong formula