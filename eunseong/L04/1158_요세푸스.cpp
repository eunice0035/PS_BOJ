#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, k,temp;
    scanf("%d %d", &n, &k);
    
    list<int> LL;
    for (int i = 1; i <= n; i++)
        LL.push_back(i);
    
    list<int>::iterator it = LL.begin();
    bool flag = false; //while문 처음으로 도는지 아는지 체크
    
    printf("<");
    while (!LL.empty())
    {
        temp = (flag == false)? k-1 : k;
        //begin()은 첫번째 원소를 가르키기 때문에
        //k가 아닌 k-1 번을 돌아야 k번째 원소를 가르킴.
        flag = true;
        for (int i = 0; i < temp; i++)
        {
            it++;
            if (it == LL.end())
                it = LL.begin();
        }
        
        if(LL.size()==1) 
            printf("%d",*it);

        else
            printf("%d, ", *it);
        
        it = LL.erase(it);
        it--;
    }
    printf(">");
}