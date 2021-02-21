#include <iostream>
#include<list>
#include<string>
using namespace std;

int main(void) {
    list<char> logger;
    list<char>::iterator t = logger.end();

    string a;
    int n;
    cin >> n;
    char** result = new char* [n];
    for (int i = 0; i < n; i++) { // 테스트케이스만큼 반복
        cin >> a;

        for (int j = 0; j < a.size(); j++) {//읽으면서 리스트에 넣을거임
            if (a[j] == '<') {
                if (t != logger.begin()) {
                    t--;
                }
            }
            else if (a[j] == '>') {
                if (t != logger.end()) {
                    t++;
                }
            }
            else if (a[j] == '-') {
                if (t != logger.begin()) {
                    t--;
                    t = logger.erase(t);
                }
            }
            else { //글자나숫자면
                if (logger.empty()) {
                    logger.push_back(a[j]);
                }
                else {
                    logger.insert(t, a[j]);
                }
            }
        }
        t = logger.end();
        if (logger.begin() != logger.end())
            t--;

        for (list<char>::iterator it = logger.begin(); it != t; it++) {
            //cout << *it;
        }

        result[i] = new char[logger.size() + 1];

        int p = 0;

        for (list<char>::iterator it = logger.begin(); it != logger.end(); it++) {
            result[i][p] = *it;
            p++;
        }
        result[i][p] = 0;

        cout << result[i] << '\n';

        logger.clear();
        t = logger.end();
    }

    return 0;
}