#include <iostream>
using namespace std;

int main(void) {
    int a;
    cin >> a;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a - i; j++) {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}