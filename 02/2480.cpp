#include <stdio.h>
#include <iostream>
using namespace std;

int main(void) {
	int a, b, c;
	cin >> a >> b >> c;
	if (a == b && b == c)
		cout << 10000 + a * 1000;
	else if (a == b && a != c)
		cout << 1000 + a * 100;
	else if (a == c && a != b)
		cout << 1000 + a * 100;
	else if (b == c && b != a)
		cout << 1000 + b * 100;
	else if (a != b && b != c && a != c) {
		int max = 0;
		if (a > max)
			max = a;
		if (b > max)
			max = b;
		if (c > max)
			max = c;
		cout << max * 100;
	}
	return 0;
}