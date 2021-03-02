#include<iostream>
#include<deque>
#include<string.h>
using namespace std;
char func[100000];
char str_buff[300000];
int main(void) {
    int n, m;
    cin >> n;
    deque<int> ac;

    int p;
    int point = 0;;
    for (int i = 0; i < n; i++) {
        cin >> func;
        cin >> m;

        string aa;
        cin >> aa; // 배열 입력 받기
        aa.erase(aa.begin()); //앞에 괄호 지우기
        aa.erase(aa.end() - 1); //뒤에 괄호 지우기

        strcpy(str_buff, aa.c_str());
        char* tok = strtok(str_buff, ",");
        for (int j = 0; j < m; j++) { //콤마로 자르기
            ac.push_back(atoi(tok));
            tok = strtok(NULL, ",");
        }
        int flag = 0;
        for (int j = 0; j < strlen(func); j++) { //R D 갯수만큼 반복
            if (func[j] == 'R') { //R일때 뒤집기
                if (point == 1) {
                    point = 0;
                }
                else {
                    point = 1;
                }
            }
            else if (func[j] == 'D') { //D일때 맨 앞에꺼 지우기
                if (ac.empty()) {
                    cout << "error\n";
                    flag = 1;
                    break;
                }
                else
                    if (point == 0) { //
                        ac.pop_front();
                    }
                    else {
                        ac.pop_back();
                    }
            }
        }
        if (flag != 1) cout << "[";
        if (ac.size() > 0) {

            if (point == 0) {
                while (ac.size() > 1) {
                    cout << ac.front() << ",";
                    ac.pop_front();
                }
            }
            else {
                while (ac.size() > 1) {
                    cout << ac.back() << ",";
                    ac.pop_back();
                }
            }
            cout << ac.front() << "]\n";
            ac.pop_front();
        }
        else {
            if (flag != 1) cout << "]\n";
        }
        point = 0;
        flag = 0;


        ac.clear();

    }
    return 0;
}