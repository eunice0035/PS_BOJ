#include <iostream>
using namespace std;

int main(void) {
	int n, number;
	int number_set[2000000] = { 0 };
	int max = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> number;
		number_set[number]++;
		if (max < number)
			max = number;
	}
	int goal;
	int count = 0;
	cin >> goal;

	for (int i = 0; i <= max; i++) {
		if (number_set[i] > 0) 
			if (number_set[goal - i] > 0) 
				count = count + number_set[i];
	}
	cout << count/2;

	return 0;
}