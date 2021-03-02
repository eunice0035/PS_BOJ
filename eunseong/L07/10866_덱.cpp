#include <bits/stdc++.h>
using namespace std;

deque<int> DQ;

void push_front(int x){
    DQ.push_front(x);
}

void push_back(int x){
    DQ.push_back(x);
}

void pop_front(){
    if(!DQ.empty()){
        cout << DQ.front() << '\n';
        DQ.pop_front();
    }
    else cout << -1 << '\n';
}

void pop_back(){
    if(!DQ.empty()){
        cout << DQ.back() << '\n';
        DQ.pop_back();
    }
    else cout << -1 <<'\n';
}

int size(){
    return DQ.size();
}

int empty(){
    return DQ.empty();
}

int front(){
    if(!DQ.empty()) return DQ.front();
    return -1;
}

int back(){
    if(!DQ.empty()) return DQ.back();
    return -1;
}

int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    while(n--){
        string op;
        cin >> op;

        if(op == "push_front"){
            int a;
            cin >> a;
            push_front(a);
        }
        if(op == "push_back"){
            int a;
            cin >> a;
            push_back(a);
        }
        
        if(op == "pop_front") pop_front();
        if(op == "pop_back") pop_back();
        if(op == "size") cout << size() << '\n';
        if(op == "empty") cout << empty() << '\n';
        if(op == "front") cout << front() << '\n';
        if(op == "back") cout << back() << '\n';
    } 
}