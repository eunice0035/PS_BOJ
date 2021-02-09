#include <iostream>
using namespace std;

int main(void) {
	int arr[100];
	int number[201] = { 0 };
	int a;
	int b;
	int want;
	cin >> a;
	for (int i = 0; i < a; i++) {
		cin >> arr[i];
		b = arr[i];
		number[b + 100]++;
	}
	cin >> want;

	cout << number[want + 100];

	return 0;
}