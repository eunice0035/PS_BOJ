#include <iostream>
using namespace std;

int main(void) {
	int arr[21];
	int arr2[21] = { 0 };
	int in[10][2];
	int count[10];
	for (int i = 1; i <= 20; i++) {
		arr[i] = i;
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 2; j++) {
			cin >> in[i][j];
		}
	}

	for (int i = 0; i < 10; i++) {
		count[i] = in[i][1] - in[i][0];
	}
	
	for (int i = 0; i < 10; i++) {
		for (int k = in[i][0]; k <= in[i][1]; k++) {
			arr2[k] = arr[in[i][0] + in[i][1] - k];
		}
		for (int k = in[i][0]; k < in[i][1] + 1; k++) {
			arr[k] = arr2[k];
		}
	}
	for (int i = 1; i <= 20; i++) {
		cout << arr[i] << " ";
	}
	return 0;

}