#include<iostream>
using namespace std;

struct car {
	int num;
	double gas;
};

void show(car* p);

int main() {
	car c;

	cout << "차량 번호 : "; cin >> c.num;
	cout << "열료량 : "; cin >> c.gas;
	
	show(&c);

	return 0;
}
void show(car* p) {
	cout << "차량 번호는 " << p->num << "이고 연료량은 " << p->gas << "입니다.\n";
}