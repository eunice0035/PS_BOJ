#include <bits/stdc++.h>
using namespace std;

int stu[100001];
int vis[100001];
int done[100001];
int cnt;
void dfs(int node){

    vis[node] = 1;
    int next = stu[node];
    if(!vis[next]) 
        dfs(next);
    
    else if(!done[next]){
        for(int i=next; i != node; i=stu[i])
            cnt++;
        cnt++;
    }
    done[node] = 1;
}

int main(void){
    int tc;
    cin >> tc;

    for(int i=0; i<tc; i++){
        int num;
        cin >> num;

        fill(vis,vis+num+1,0);
        fill(done,done+num+1,0);

        for(int j=1; j<=num; j++) 
            cin >> stu[j];
        
        cnt = 0;
        for(int j=1; j<=num; j++){
            if(!vis[j]) dfs(j);
        }
        cout << "ans : " << num-cnt << '\n';
    }
}