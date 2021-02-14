#include <iostream>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	int* word = new int[n];
	for (int i = 0; i < n; i++) 
		word[i] = 1;

	string word1, word2;

	for (int p = 0; p < n; p++) {
		int alphabet1[26] = { 0 };
		int alphabet2[26] = { 0 };
		cin >> word1 >> word2;
		for (auto a : word1) {
			alphabet1[a - 'a']++;
		}
		for (auto a : word2) {
			alphabet2[a - 'a']++;
		}
		for (int i = 0; i < 26; i++) {
			if (alphabet1[i] != alphabet2[i]) {
				//cout <<p<<" "<<i<<" "<< alphabet1[i] << " " << alphabet2[i] << "\n";
				word[p] = 0;
				break;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		if (word[i] == 0)
			cout << "Impossible\n";
		else
			cout << "Possible\n";

	}
	return 0;
}