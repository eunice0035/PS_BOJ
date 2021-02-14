#include <iostream>
#include<algorithm>
using namespace std;

int main(void) {
	int n;
	int* number_set;
	int max = 0;
	cin >> n;
	int* tmp = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> tmp[i];
	}
	sort(tmp, tmp+n);
	
	int i = 0;
	int j = n-1;
	int goal;
	int count = 0;
	cin >> goal;
	while(1) {
		//cout << i << " " << j<<"\n";
		if (i >= j)
			break;
		else {
			if (tmp[i] + tmp[j] == goal) {
				//cout << tmp[i] << " " << tmp[j] << endl;
				i++;
				j--;
				count++;

			}
			else
				if (tmp[i] + tmp[j] > goal) {
					j--;
				}
				else if (tmp[i] + tmp[j] < goal) {
					i++;
				}
		}
	}

	cout << count;

	return 0;
}	