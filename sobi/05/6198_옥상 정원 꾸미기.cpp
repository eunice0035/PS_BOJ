#include <iostream>
#include <stack>
using namespace std;

int main(void) {

	long long n;
	cin >> n;
	long long* arr = new long long[n];
	for (long long i = 0; i < n; i++) {
		cin >> arr[i];
	}
	stack<long long> building;
	long long sum = 0;
	building.push(arr[0]);
	//cout << 0 << " top " << building.top() << "\n";
	for (long long i = 1; i < n; i++) {
		if (building.top() <= arr[i]) { //top�� ���� �������°ź��� ������ -> top�� ���� �������°ź��� ���� ���� pop
			while (1) {
				if (building.size() == 0)
					break;
				else if (building.top() <= arr[i]) {
					//cout << i << " pop " << building.top() << "\n";
					building.pop();
				}
				else{
					break;
				}
			}
			building.push(arr[i]);
			sum = sum + building.size() - 1;
			//cout << "sum " << sum << "\n";
			
		}
		else { //top�� ���� �������°ź��� ũ�� -> ���� �� ����
			
			building.push(arr[i]);
			sum = sum + building.size() - 1;
			//cout << "sum " << sum << "\n";
		}
		//cout << i << " top " << building.top() << "\n";

	}
	cout << sum;


	return 0;
}