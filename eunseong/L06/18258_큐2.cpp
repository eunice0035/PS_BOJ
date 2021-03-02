#include <bits/stdc++.h>
using namespace std;

const int MX = 10000005;
int dat[MX];
int head=0, tail=0;

void push(int x){
    dat[tail++] = x;
}
void pop(){
    if(head != tail){
        cout << dat[head] << '\n';
        head++;
    }
    else cout << -1 << '\n';
}

void size(){
    cout << (tail-head) << '\n';
}

void empty(){
    if(head == tail) cout << 1 << '\n';
    else cout << 0 << '\n';
}

void front(){

    if(head != tail ) cout << dat[head] << '\n';
    else cout << -1 << '\n';
}

void back(){
    if(head != tail) cout << dat[tail-1] << '\n';
    else cout << -1 << '\n';
}

int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    
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