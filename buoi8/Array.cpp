#include <iostream>
using namespace std;

void input(int b[], int& n) {
	cout << "Nhap so luong phan tu: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "\t+ Phan tu " << (i + 1) << ": ";
		cin >> b[i];
	}
}