#include<iostream>
using namespace std;

enum WEEK { SUN, MON, TUE, WED, THU, FRI, SAT };

int main() {
	WEEK w;
	w = SUN;

	switch (w) {
	case SUN:cout << "일요일입니다.\n"; break;
	}






	return 0;
}