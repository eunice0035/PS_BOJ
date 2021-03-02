#include <bits/stdc++.h>
using namespace std;

queue<int> Q;

void push(int x){
    Q.push(x);
}

void pop(){
    if (!Q.empty()){
        cout << Q.front() << '\n';
        Q.pop();
    }
    else cout << -1 <<'\n';
}

void size(){
    cout << Q.size() <<'\n';
}
void empty(){
    cout << Q.empty() << '\n';
}
void front(){

    if(!Q.empty()) cout << Q.front() <<'\n';
    else cout << -1 <<'\n';
}

void back(){
    if(!Q.empty()) cout << Q.back() << '\n';
    else cout << -1 <<'\n';
}

int main(void){
    int num;
    cin >> num;

    while(num--){
        string op;
        cin >> op;

        if(op == "push"){
            int a;
            cin >> a;
            push(a);
        }

        if(op == "pop") pop();
        if(op == "size") size();
        if(op == "empty") empty();
        if(op == "front") front();
        if(op == "back") back();
    }
}