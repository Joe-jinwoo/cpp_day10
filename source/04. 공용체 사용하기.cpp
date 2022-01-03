#include<iostream>
using namespace std;

union car {
	int num;
	int gas;
};


int main() {
	car c;

	cout << "차량 번호 : "; cin >> c.num;

	cout << "차량번호도 연료량도 다 같이 " << c.gas << "입니다.\n";

	return 0;
}