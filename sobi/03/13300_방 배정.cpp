#include <iostream>
using namespace std;

int main(void) {
	int st_number, room_capacity, gender_number, grade_number;
	int gender, grade;
	cin >> st_number >> room_capacity;

	int** student = new int* [6];
	for (int i = 0; i < 6; i++)
		student[i] = new int[2];

	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 2; j++)
			student[i][j] = 0;
	}
	for (int i = 0; i < st_number; i++) {
		cin >> gender >> grade;
		if (gender == 0)
			student[grade - 1][0]++;
		else if (gender == 1)
			student[grade - 1][1]++;
		//cout << student[grade - 1][0] << " " << student[grade - 1][1] << "\n";

	}
	int count = 0;
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 2; j++) {
			if (student[i][j] % room_capacity == 0)
				count = count + student[i][j] / room_capacity;
			else if (student[i][j] % room_capacity > 0)
				count = count + student[i][j] / room_capacity + 1;
		}
	}

	cout << count << "\n";


	return 0;
}