#include <bits/stdc++.h>
using namespace std;

int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);

    int a, b;
    cin >> a >> b;

    int cnt_2 = 0, cnt_3 = 0;

    deque<int> DQ;
    queue<int> target;

    for (int i = 1; i <= a; i++)
        DQ.push_back(i);
    for (int i = 0; i < b; i++){
        int val;
        cin >> val;
        target.push(val);
    }

    int diff_front, diff_back;

    while (!target.empty()){

        int t1 = target.front();
        int d1 = DQ.front();

        if (t1 == d1){
            target.pop();
            DQ.pop_front();
        }

        else{

            for (int i = 0; i < DQ.size(); i++){
                if (DQ[i] == target.front()){
                    diff_front = i;
                    diff_back = DQ.size() - i;
                }
            }

            if (diff_front < diff_back){
                int temp = DQ.front();
                DQ.pop_front();
                DQ.push_back(temp);
                cnt_2++;
            }

            else if (diff_front >= diff_back){
                int temp = DQ.back();
                DQ.pop_back();
                DQ.push_front(temp);
                cnt_3++;
            }
        }
    }
    cout << cnt_2 + cnt_3;
}