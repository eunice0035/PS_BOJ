#include<iostream>
using namespace std;

int main(void) {
	int a;
	cin >> a;
	for (int i = 1; i <= a; i++) {
		if (i <= a) {
			for (int j = 1; j <= a - i; j++) {
				cout << "0";
			}
			for (int j = 1; j <= (2 * i - 1); j++) {
				cout << "*";
			}
			cout << "\n";
		}
		/*else if (i > a) {
			for (int j = 1; j < i - a; j++) {
				cout << "5";
			}
			cout << "\n";
			for(int j=1; j<)
		}*/
	}
	for (int i = 0; i < a-1; i++) {
		for (int j = 0; j <= i; j++) {
			cout << "0";
		}
		for (int j = 1; j < (2 * a - 2)-2*i; j++) {
			cout << "*";
		}
		cout << "\n";
	}


		return 0;
	
}