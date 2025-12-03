#include <iostream>

using namespace std;

void baitap()
{/*Cau 1
	int a;
	float b;
	char c;
	string d;
	cout << "Nhap so nguyen a = ";
	cin >> a;
	cout << "Nhap so thuc b = ";
	cin >> b;
	cout << "Nhap ky tu c = ";
	cin >> c;
	cout << "Nhap chuoi d = ";
	//cin >> d;
	cin.ignore();
	getline(cin, d); //#include 

	cout << "Gia tri cua a = " << a << endl;
	cout << "Gia tri cua b = " << b << endl;
	cout << "Gia tri cua c = " << c << endl;
	cout << "Gia tri cua d = " << d << endl;//

	/*Cau 2
		int namsinh;
	cout << "Nhap nam sinh: ";
	cin >> namsinh;
	int tuoi = 2025 - namsinh;
	cout << "Ban " << tuoi << " tuoi." << endl;*/

		/*Cau 3
		int tongsogiay;
	cout << "Nhap tong so giay: ";
	cin >> tongsogiay;
	int sogio = tongsogiay / 3600;
	//Tong so giay con lai
	tongsogiay = tongsogiay - sogio * 3600;
	int sophut = tongsogiay / 60;
	//Tong so giay con lai
	int sogiay = tongsogiay - sophut * 60;
	cout << sogio << ":" << sophut << ":" << sogiay;*/

		/*Cau 5
		float so1, so2, so3;
	cout << "Nhap vao 3 so thuc: ";
	cin >> so1 >> so2 >> so3;
	float trungbinh = (so1 + so2 + so3) / 3;
	//#include 
	cout << "Trung binh: " << fixed << setprecision(2) << trungbinh;*/
}

int main()
{
	const float PI = 3.14;
	//Viet chuong trinh tinh dien tich va chu vi hinh tron voi ban kinh r
	int r;
	cout << "Nhap ban kinh r: ";
	cin >> r;
	cout << "Dien tich: " << PI * r * r << endl;
	cout << "Chu vi: " << 2 * PI * r << endl;
}
