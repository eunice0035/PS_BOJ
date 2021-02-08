#include<iostream>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	unsigned long long** arr = 0;
	unsigned long long a;
	cin >> a;
	arr = new unsigned long long*[a];
	for (unsigned long long i = 0; i < a; i++) {
			arr[i] = new unsigned long long[2];
	}

	for (unsigned long long i = 0; i < a; i++) {
		for (int j = 0; j < 2; j++) {
			cin >> arr[i][j];
		}
	}

	for (unsigned long long i = 0; i < a; i++) {
		int sum = 0;
		for (int j = 0; j < 2; j++) {
			sum = sum + arr[i][j];
		}
		cout << sum << "\n";
	}
	
}