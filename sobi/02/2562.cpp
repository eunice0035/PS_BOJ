#include <stdio.h>
#include <iostream>
using namespace std;

int main(void) {
	int a;
	int max = 0;
	int count = 0;
	for (int i = 0; i < 9; i++) {
		cin >> a;
		if (a > max) {
			max = a;
			count = i+1;	
		}
	}
	cout << max<<"\n";
	cout << count;

	return 0;
}