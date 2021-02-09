#include <bits/stdc++.h>
using namespace std;

int main(void){

    int N, max;
    int num[10]={0,};

    cin >> N;

    if(N==0) num[0] =1;
    
    while(N > 0){
        if(N%10 == 9) num[6]++;
        else num[N%10]++;
        N /= 10;
    }

    if(num[6]%2 != 0) num[6] = num[6]/2+1;
    else num[6] = num[6]/2; 

    //max_element() : 구간 안에서 최대값 구하는 함수, 주소값을 리턴함
    //배열은 포인터, 벡터는 이터레이터 사용해서 값을 받아야함.
    max = *max_element(num, num+10);
    cout << max;
}