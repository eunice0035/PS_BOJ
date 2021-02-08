#include<iostream>
using namespace std;

int main(void) {
	int a;
	cin >> a;
	for (int i = 1; i < 2 * a; i++) {
		if (i <= a) {
			for (int j = 1; j <= i-1; j++)
				cout << " ";
			for (int j = 1; j <= 2 * a - 2 * i +1; j++)
				cout << "*";
			cout << "\n";
		}
		else {
			for (int j = 1; j <= 2 * a - i-1; j++)
				cout << " ";
			for (int j = 1; j <= 2 * i - 2 * a +1; j++)
				cout << "*";
			cout << "\n";
		}
	}
	return 0;
}