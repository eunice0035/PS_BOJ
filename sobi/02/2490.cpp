#include <iostream>
using namespace std;

int main(void) {
	int arr[3][4];
	int result[3];
	int zero=0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			if (arr[i][j] == 0)
				zero++;
		}
		result[i] = zero;
		zero = 0;
	}
	for (int i = 0; i < 3; i++) {
		if(result[i]==0)
			cout << "E" << "\n";
		else if (result[i]==1)
			cout << "A" << "\n";
		else if (result[i] == 2)
			cout << "B" << "\n";
		else if (result[i] == 3)
			cout << "C" << "\n";
		else if (result[i] == 4)
			cout << "D" << "\n";

	}
	return 0;
}