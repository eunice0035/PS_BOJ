#include <iostream>
using namespace std;

int main(void) {
	int alphabet[26] = { 0 };
	string word;
	cin >> word;

	for (auto a : word) {
		alphabet[a - 'a']++;
	}
	for (int i = 0; i < 26; i++) {
		cout << alphabet[i] << " ";
	}
	return 0;
}