#include <iostream>
using namespace std;

int main(void) {
	int number_set[10];
	for (int i = 0; i < 10; i++)
		number_set[i] = 1;
	int room_number;
	cin >> room_number;
	int number, count= 1;
	int i = 0;
	while (room_number > 0) {
		number = room_number % 10;
		room_number = room_number / 10;
		if (number == 6 || number == 9) {
			if (number_set[6] > 0)
				number_set[6]--;
			else if (number_set[9] > 0)
				number_set[9]--;
			else {
				for (int i = 0; i < 10; i++)
					number_set[i]++;
				count++;
				number_set[number]--;
			}
		}
		else {
			if (number_set[number] > 0) {
				number_set[number]--;
			}
			else {
				for (int i = 0; i < 10; i++)
					number_set[i]++;
				count++;
				number_set[number]--;
			}
		}
	}
	cout << count << "\n";


	return 0;
}