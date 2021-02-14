#include <bits/stdc++.h>
//using namespace std;

    
int main(void){
    int n,x,cnt =0;
    std::cin >> n;
    int list[n];

    for(int i=0; i<n; i++){
        int a;
        std::cin >> a;
        list[i] = a;
    }

    std::sort(list, list+n);
    std::cin >> x;
    
    int i =0;
    int j = n-1;
    
    while(1){
            
        if(i >= j) break;
        if(list[i]+list[j] == x){
            cnt++;
            i++;
            j--;
        }
        else if(list[i]+list[j] > x){
            j--;
        }

        else i++;
    }
    std::cout << cnt;
    
}