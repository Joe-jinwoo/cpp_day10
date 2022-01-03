#include<iostream>
using namespace std;

struct car {
	int num;
	double gas;
};

int main() {
	car car1;

	cout << "차량의 번호를 입력하시오 : "; cin >> car1.num;

	cout << "연료량을 입력하시오 : "; cin >> car1.gas;

	cout << "차량 번호는 " << car1.num << "이고 연료량은 " << car1.gas << "입니다.\n";

	return 0;
}