#include <iostream>
using namespace std;

int main(void) {
	int a, b, c;
	cin >> a >> b >> c;
	int mul = a * b * c;
	int arr[10] = { 0 };
	int quo, rem;
	while (1){
		rem = mul % 10;
		mul = mul / 10;
		arr[rem]++;

		if (mul == 0)
			break;
	}

	for (int i = 0; i < 10; i++) {
		cout << arr[i]<<"\n";
	}
	return 0;

}