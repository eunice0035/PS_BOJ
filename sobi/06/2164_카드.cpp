#include<iostream>
#include<queue>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	queue<int> card;
	for (int i = 0; i < n; i++) {
		card.push(i + 1);
	}
	while(card.size()>1) {
		for (int i = 0; i < 2; i++) {
			card.pop();
			if (card.size() == 1)
				break;
			card.push(card.front());
			card.pop();
			if (card.size() == 1)
				break;
		}
	}
	cout << card.front();
}