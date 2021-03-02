#include <bits/stdc++.h>
using namespace std;

int main(void){

    //cin.tie(0);
    //ios::sync_with_stdio(0);

    string list;
    cin >> list;
    
    stack<char> SS;
    int stick = 0;

    for(int i=0; i<list.size(); i++){
        if(list[i] == '('){
            SS.push(list[i]);
            stick++;
        }
        else if(list[i] == ')'){
            if(SS.top() == '('){
                SS.pop();
                
                if(list[i-1] == '('){
                    stick--;
                    stick += SS.size();   
                }
            }
        }
    }
    cout << stick;
}