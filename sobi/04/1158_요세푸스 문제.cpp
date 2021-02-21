#include<iostream>
#include<list>
#include <ctime>
using namespace std;

int main(void) {
	clock_t start1, start2, end1, end2;
	float res1, res2;
	start1 = clock();

	list<int> josephus;
	int n, k;
	cin >> n >> k;
	for (int i = 1; i < n + 1; i++) {
		josephus.push_back(i);
	}
	list<int>::iterator t;
	t = josephus.begin();
	int count = k - 1;
	cout << "<";
	int total = 0;
	while (josephus.size() != 0) {
		total++;
		t++;
		count--;
		if (count == 0) {
			if (t == josephus.end()) {
				t = josephus.begin();
			}
			cout << *t;
			t = josephus.erase(t);
			if (josephus.size() == 0) {
				cout << ">";
				break;
			}

			else
				cout << ", ";
			count = k - 1;
		}
		if (t == josephus.end()) {
			t = josephus.begin();
		}
	}
	cout << total;
	end1 = clock();
	res1 = (double)(end1 - start1) / CLOCKS_PER_SEC;
	cout << "excute time : " << res1 << '\n';

	return 0;
}
