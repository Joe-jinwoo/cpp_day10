#include<iostream>
using namespace std;

struct car {
	int num;
	double gas;
};

int main() {
	car car1;

	cout << "������ ��ȣ�� �Է��Ͻÿ� : "; cin >> car1.num;

	cout << "���ᷮ�� �Է��Ͻÿ� : "; cin >> car1.gas;

	cout << "���� ��ȣ�� " << car1.num << "�̰� ���ᷮ�� " << car1.gas << "�Դϴ�.\n";

	return 0;
}