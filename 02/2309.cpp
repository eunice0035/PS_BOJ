#include <stdio.h>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
typedef struct nanjang2 {
    int height;
    bool exception;
}nanjang2;
bool compare(nanjang2 i, nanjang2 j) {
    return i.height < j.height;
}
int main() {

    vector<nanjang2> nan;
    for (int i = 0; i < 9; i++) {
        nanjang2 tmp;
        cin>>tmp.height;
        tmp.exception = false;
        nan.push_back(tmp);

    }
    int exc1 = 0, exc2 = 1;
    int total;
    while (1) {
       // printf("%d, %d\n", exc1, exc2);
        total = 0;
        nan[exc1].exception = true;
        nan[exc2].exception = true;
        for (int i = 0; i < 9; i++) {
            if (!nan[i].exception) {
                total += nan[i].height;
            }
        }
        if (total == 100) {
            sort(nan.begin(), nan.end(), compare);

            for (int i = 0; i < 9; i++) {
                if (!nan[i].exception) {
                    printf("%d\n", nan[i].height);
                }
            }
            break;
        }
        nan[exc1].exception = false;
        nan[exc2].exception = false;
        exc2++;
        if (exc2 == 9) {
            exc1++;
            exc2 = exc1 + 1;
        }
        if (exc1 == 9) break;

    }


    return 0;
}