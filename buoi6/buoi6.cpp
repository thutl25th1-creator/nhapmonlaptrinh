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
void cau2() {
    int n, tich = 1;
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        tich *= 1;
    }
    cout << "Tich: " << tich << endl;
}
void cau3() {
    int x, n, tich = 1;
    cout << "Nhap x, n: ";
    cin >> x >> n;
    for (int i = 1; i <= n; i++) {
        tich *= x;
    }
    cout << "Tich: " << tich << endl;
}
void cau4() {
    int n;
    cout << "Nhap bang cuu chuong: ";
    cin >> n;
    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }
}
void cau5() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << endl;
        }
    }
}
void cau6() {
    int n, tong = 0;
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            tong += i;
        }
    }
    cout << "Tong cac uoc: " << tong << endl;
}
void cau7() {
    int n, tong = 0;
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            tong += i;
        }
    }
    if (tong == n)
        cout << n << "la so hoan thien" << endl;
    else {
        cout << n << "khong la so hoan thien" << endl;
    }
}
int main()
{
    cau7();
}

