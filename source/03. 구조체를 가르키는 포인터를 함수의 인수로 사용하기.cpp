#include<iostream>
using namespace std;

struct car {
	int num;
	double gas;
};

void show(car* p);

int main() {
	car c;

	cout << "���� ��ȣ : "; cin >> c.num;
	cout << "���ᷮ : "; cin >> c.gas;
	
	show(&c);

	return 0;
}
void show(car* p) {
	cout << "���� ��ȣ�� " << p->num << "�̰� ���ᷮ�� " << p->gas << "�Դϴ�.\n";
}