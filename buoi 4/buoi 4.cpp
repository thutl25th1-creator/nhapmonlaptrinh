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
 
void cau2() {
    int sotien;
    cout << "Nhap so tien: ";
    cin >> sotien;
    int to500k = sotien / 500000;
    cout << "So to 500k: " << to500k << endl;
    sotien -= to500k * 500000;
    int to200k = sotien / 200000;
    cout << "So to 200k: " << to200k << endl;
    sotien -= to200k * 200000;
    int to100k = sotien / 100000;
    cout << "So to 100k: " << to100k << endl;
    sotien -= to100k * 100000;
    int to50k = sotien / 50000;
    cout << "So to 50k: " << to50k << endl;
    sotien -= to50k * 50000;
    int to20k = sotien / 20000;
    cout << "So to 20k: " << to20k << endl;
    sotien -= to20k * 20000;
    int to10k = sotien / 10000;
    cout << "So to 10k: " << to10k << endl;
    sotien -= to10k * 10000;

}
void cau3() {
    float bankinh, chieucao;
    cout << "Nhap ban kinh, chieu cao (cm): ";
    cin >> bankinh >> chieucao;
    const float PI = 3.14;
     
    float V = PI * bankinh * bankinh * chieucao;
    cout << "The tich khoi tru tron la: " << V << "(cm3)" << endl;
    cout << "So lit nuoc la: " << V / 1000 << "(lit)" << endl;
}
int main()
{
    cau3();
}

