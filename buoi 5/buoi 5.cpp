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
int main()
{
    cau2();

}

