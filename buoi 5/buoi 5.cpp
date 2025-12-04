#include <iostream>
using namespace std;
void cau1() {
    int a, b, c;
    cout << "Nhap a,b,c: ";
    cin >> a >> b >> c;

    if (a > b && a > c)
        cout << a;
    if (b > a && b > c)
        cout << b;
    if (c > a && c > b)
        cout << c;
    int max = a;
    if (b > max)
        max = b;
    cout << max;
 }
void cau2(){
    float a, b;
    cout << "Nhap a, b: ";
    cin >> a >> b;
    if (a * b > 0)
        cout << "cung dau";
    else
        cout << "khac dau";
    }
void cau3() {
    int a, b;
    cout << "Nhap a, b: ";
    cin >> a >> b;
    if (a == 0) {
        if (b == 0)
            cout << "Phuong trinh vo so nghiem" << endl;
        else
            cout << " Phuong trinh vo nghiem" << endl;
    }
    else {
        cout << "nghiem la: " << (-b * 1.0 / a) << endl;
    }
}
void cau4() {
    int thang;
    cout << " Nhap thang: ";
    cin >> thang;
    if (thang <= 3) {
        cout << "Quy 1";
    }
    else if(thang <= 6) {
        cout << "Quy 2";
    }
    else if (thang <= 9) {
        cout << "Quy 3";
    }
    else if (thang <= 12) {
        cout << "Quy 4";
    }
}
int main()
{
    cau4();

}

