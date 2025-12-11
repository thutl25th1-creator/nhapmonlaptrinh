#include <iostream>
using namespace std;

void cau1() {
    int n, tong = 0;
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        tong += 1;
    }
    cout << "Tong: " << tong << endl;
}
int main()
{
    cau1();
}

