#include<iostream>
using namespace std;

int main(void) {
	int call;
	int yBill=0, mBill = 0;
	int count = 0;
	cin >> count;
	int sum = 0;
	for (int i = 0; i < count; i++) {
		cin >> call;
		yBill = yBill + (call / 30 + 1) * 10;
		mBill = mBill + (call / 60 + 1) * 15;
	}


	if (yBill - mBill > 0)
		cout << "M " << mBill;
	else if (yBill - mBill < 0)
		cout << "Y " << yBill;
	else
		cout << "Y M " << yBill;

	return 0;
}