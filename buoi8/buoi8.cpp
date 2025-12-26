#include "Array.h"
#include <iostream>
using namespace std;
#define MAX 100

int main()
{
	int a[MAX], n = 0;
	input(a, n);
	//output(a, n);
	//giatrichan(a, n);
	//vitriam(a, n);
	//giatrilonnhat(a, n);
	//tonggiatriam(a, n);
	//sapxep(a, n);
	//output(a, n);
	int vt = vitrichandautien(a, n);
	if (vt == -1) {
		cout << "khong co gia tri chan trong mang" << endl;
	}
	else {
		cout << "Vi tri chan dau tien: " << vt << endl;
	}
}

