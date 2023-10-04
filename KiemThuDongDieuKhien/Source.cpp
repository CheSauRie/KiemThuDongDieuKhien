#include<iostream>
using namespace std;

string check(int a, int b, int c) {
	string res;
	if (a < b + c && b < a + c && c < a + b) {
		if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b)
			res = "Tam giac vuong";
		else if (a == b && b == c)
			res = "Tam giac deu";
		else if (a == b || a == c || b == c)
			res = "Day la tam giac can";
		else if (a * a > b * b + c * c || b * b > a * a + c * c || c * c > a * a + b * b)
			res = "Tam giac tu";
		else
			res = "Tam giac nhon";
	}
	else
		res = "Khong phai tam giac";
	return res;

}
int main() {
	int a, b, c;
	cout << "Nhap vao canh a: ";
	cin >> a;
	cout << "Nhap vao canh b: ";
	cin >> b;
	cout << "Nhap vao canh c: ";
	cin >> c;
	string res = check(a, b, c);
	cout << res;
	return 0;
}