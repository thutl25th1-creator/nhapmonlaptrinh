#include <iostream>
using namespace std;

void input(int b[], int & n) {
	cout << "Nhap so luong phan tu: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "\t+ Phan tu " << (i + 1) << ": ";
		cin >> b[i];
	}
}
void output(int b[], int n) {
	cout << "Danh sach phan tu mang:" << endl;
	int i = 0;
	while (i < n) {
		cout << b[i] << "   ";
		i++;
	}
	cout << endl;
}
void giatrichan(int b[], int n) {
	cout << "Danh sach gia tri chan:" << endl;
	int i = 0;
	while (i < n) {
		if (b[i] % 2 == 0)
			cout << b[i] << "  ";
		i++;
	}
	cout << endl;
}
void vitriam(int b[], int n) {
	cout << "Danh sach vi tri am:" << endl;
	int i = 0;
	while (i < n) {
		if (b[i] < 0)
			cout << i + 1 << "   ";
		i++;
	}
	cout << endl;
}
void giatrilonnhat(int b[], int n) {
	int max = b[0];
	for (int i = 1; i < n; i++) {
		if (b[i] > max)
			max = b[i];
	}
	cout << "Gia tri lon nhat: " << max << endl;
}
void tonggiatriam(int b[], int n) {
	int tong = 0;
	for (int i = 0; i < n; i++) {
		if (b[i] < 0)
			tong += b[i];
	}
	cout << "Tong am: " << tong << endl;
}