#include <stdio.h>
#include <iostream>
using namespace std;

int main(void) {
	int a;
	cin >> a;
	if (a >= 90 && a <= 100)
		cout << "A";
	else if (a >= 80 && a <= 89)
		cout << "B";
	else if (a >= 70 && a <= 79)
		cout << "C";
	else if (a >= 60 && a <= 69)
		cout << "D";
	else
		cout << "F";

	return 0;
}