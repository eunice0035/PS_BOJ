#include <stdio.h>
#include <iostream>
using namespace std;

int main(void) {
	int num, max;
	cin >> num >> max;
	int* arr;
	arr = new int[num];
	for (int i = 0; i < num; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < num; i++) {
		if (arr[i] < max) {
			cout << arr[i]<<" ";
		}
	}
	return 0;
}