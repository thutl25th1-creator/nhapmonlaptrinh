#include <iostream>
#include <string>
using namespace std;

void cau1() {
    string hoten;
    int namsinh;
    bool gioitinh;
    cout << "Nhap ho ten: ";
    getline(cin, hoten);
    cout << "Nhap nam sinh: ";
    cin >> namsinh;
    cout << "Nhap gioi tinh (1 - Nam; 0 - Nu): ";
    int temp;
    cin >> temp;
    gioitinh = temp == 1 ? true : false;
    cout << hoten << "\t" << namsinh << "\t" << (gioitinh == true ? "Nam" : "Nu") << endl;
}

int main()
{
    cau1();
}

