#include <stdio.h>
#include <iostream>
using namespace std;

int main(void) {
	int a;
	int min = 100	;
	int sum = 0;
	for (int i = 1; i < 8; i++) {
		cin >> a;
		if (a % 2 == 1) {
			sum = sum + a;
			if (min > a) {
				min = a;
			}
		}
	}
	if (sum == 0)
		cout << -1;
	else
		cout << sum << "\n" << min;

	return 0;
}