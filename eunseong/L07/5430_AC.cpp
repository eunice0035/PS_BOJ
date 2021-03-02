#include <bits/stdc++.h>
using namespace std;

/**
 * 유의사항(시간초과 난 이유)
 * 1. R 함수를 진짜로 뒤집는 함수 구현하면 안됨
 * stack이나 reverse함수 사용하면 시간초과나옴 => O(n)
 * reverse처럼 작동하게 구현해야함 그래서 덱을 써야함
 * 
 * 
 * 2. 덱이 비어있는 경우 에러나는 건 D 임
 * R일 경우는 에러가 아니기 때문에 [] 출력해야함
 *  **/

deque<int> split(string arr){
    deque<int> temp;
    
    arr.erase(arr.begin());
    arr.erase(arr.end()-1);
    
    stringstream ss(arr);
    string sval;

    while(getline(ss, sval, ',')){
        temp.push_back(stoi(sval));
    }

    return temp;
}

int main(void){

    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    while (n--){
        
        deque<int> DQ;

        string op,arr;
        cin >> op;

        int size, flag=0;
        int dir = 0;
        cin >> size;
        cin >> arr;

        DQ = split(arr);

        for (auto c : op){
            if (c == 'R')
                dir = !dir;

            if (c == 'D'){
                if(DQ.empty()){
                    cout << "error" << '\n';
                    flag=1;
                    break;
                }

                if(dir == 0) DQ.pop_front();
                else DQ.pop_back();
            }
        }

        if (flag == 0){
            cout << "[";

            while(DQ.size() > 1){
                if(dir == 0){
                    cout << DQ.front() << ",";
                    DQ.pop_front();
                }

                else{
                    cout << DQ.back() << ",";
                    DQ.pop_back();
                }
            }

            if(!DQ.empty()) cout << DQ.front();

            cout << "]\n";
        }
    }
}