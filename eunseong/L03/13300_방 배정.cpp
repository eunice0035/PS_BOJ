#include <bits/stdc++.h>
using namespace std;

int main(void){
    int N, K, room = 0;
    cin >> N >> K;

    //여 0 남 1
    int boys[7] = {0,};
    int girls[7] = {0,};

    for(int i=0; i<N; i++){
        int s, y;
        cin >> s >> y;
        if(s==0) girls[y]++;
        else boys[y]++;
    }

    for(int i=1; i<7; i++){
        if(girls[i] % K == 0) room += girls[i]/K;
        else room += girls[i]/K + 1;

        if(boys[i] % K == 0) room += boys[i]/K;
        else room += boys[i]/K +1;
    }

    cout << room;
}