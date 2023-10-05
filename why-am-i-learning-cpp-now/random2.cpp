#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Ox,Oy,R,Ax,Ay;
    cout <<"nhap toa do diem Ox";cin>>Ox;
    cout <<"nhap toa do diem Oy";cin>>Oy;
    cout <<"nhap diem Ax";cin>>Ax;
    cout <<"nhap diem Ay";cin>>Ay;
    cout <<"nhap ban kinh R";cin>>R;
    float OA;
    OA=sqrt((Ax-Ox)*(Ax-Ox)+(Ay-Oy)*(Ay-Oy));
    cout << OA;
    if(OA<R) cout <<"A nam trong duong tron";
    else if(OA>R) cout <<"A nam ngoai duong tron";
    else if(OA==R) cout <<"A nam tren duong tron";
    return 0;
}