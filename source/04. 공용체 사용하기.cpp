#include<iostream>
using namespace std;

union car {
	int num;
	int gas;
};


int main() {
	car c;

	cout << "���� ��ȣ : "; cin >> c.num;

	cout << "������ȣ�� ���ᷮ�� �� ���� " << c.gas << "�Դϴ�.\n";

	return 0;
}