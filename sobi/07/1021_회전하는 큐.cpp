#include<iostream>
#include<deque>
using namespace std;

struct node
{
	int a;
};

int main(void) {
	int n;
	int m;
	cin >> n;
	cin >> m;
	int* num = new int[m];
	for (int i = 0; i < m; i++) {
		cin >> num[i];
	}
	deque<int> deq;
	for (int i = 0; i < n; i++) {
		deq.push_back(i + 1);
	}
	int count = 0;
	int count_left = 0;
	int count_right = 0;
	for (int i = 0; i < m; i++) {
		while (deq.front()!=num[i]) {
			deq.push_back(deq.front());
			deq.pop_front();
			count_left++;
		}
		for(int p=0; p<count_left; p++){
			deq.push_front(deq.back());
			deq.pop_back();
		}
		while (deq.front()!=num[i]){
			deq.push_front(deq.back());
			deq.pop_back();
			count_right++;
		}
		for (int p = 0; p < count_right; p++) {
			deq.push_front(deq.back());
			deq.pop_back();
		}
		//cout << deq.front() << endl;
		//cout << count_left << ", " << count_right << endl;
		if (count_left <= count_right) {
			while (deq.front() != num[i]) {
				deq.push_back(deq.front());
				deq.pop_front();
			}
			//cout << num[i] << "를 뽑으려고 왼쪽으로 " << count_left << "칸 움직임\n";
			count = count + count_left;
		}
		else {
			while (deq.front() != num[i]) {
				deq.push_front(deq.back());
				deq.pop_back();
			}
			//cout << num[i] << "를 뽑으려고 오른쪽으로 " << count_right << "칸 움직임\n";
			count = count + count_right;
		}

		count_left = 0;
		count_right = 0;
		deq.pop_front();
	}

	cout << count;
	return 0;
}