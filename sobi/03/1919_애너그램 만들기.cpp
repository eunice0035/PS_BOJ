#include <iostream>
using namespace std;

int main(void) {
	int alphabet1[26] = { 0 };
	int alphabet2[26] = { 0 };
	string word1, word2;
	cin >> word1 >> word2;

	for (auto a : word1) {
		alphabet1[a - 'a']++;
	}
	for (auto a : word2) {
		alphabet2[a - 'a']++;
	}
	int count = 0;
	int plus = 0;
	for (int i = 0; i < 26; i++) {
		if (alphabet1[i] != alphabet2[i])
			if (alphabet1[i] > alphabet2[i])
				count = count + alphabet1[i] - alphabet2[i];
			else
				count = count + alphabet2[i] - alphabet1[i];
	}
	cout << count;
	return 0;
}