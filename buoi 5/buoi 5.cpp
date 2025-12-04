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
int main()
{
    cau1();

}

