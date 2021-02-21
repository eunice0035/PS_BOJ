#include<iostream>
#include<stack>
using namespace std;

struct building
{
	int a, height;

};

int main(void) {
	int n;
	cin >> n;
	stack<struct building> buildings;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];		
	}
	for (int i = 0; i < n; i++) {
		while (1) {
			if (buildings.size() == 0 ) {
				struct building tmp;
				tmp.a = i + 1;
				tmp.height = arr[i];
				arr[i] = 0;
				buildings.push(tmp);
				break;
			}
			else if (buildings.top().height > arr[i]) {
				struct building tmp;
				tmp.a = i + 1;
				tmp.height = arr[i];
				arr[i] = buildings.top().a;
				buildings.push(tmp);
				break;
			}
			else if(buildings.top().height<arr[i]) {

				buildings.pop();
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}