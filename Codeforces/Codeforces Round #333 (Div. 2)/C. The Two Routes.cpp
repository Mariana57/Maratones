#include <bits/stdc++.h>

using namespace std;

bool t [401][401];
bool b [401][401];

int n;
long m;


long bfs(bool g[401][401] ){

    queue<int> cola;

    bool visit[n];
    memset(visit,0,sizeof visit);

    long level[n];
    memset(level,0,sizeof level);

    level[0]=0;
    cola.push(0);

    while(!cola.empty()) {

        int u = cola.front();
        cola.pop();


        if(visit[u]){
            continue;
        }
        visit[u]=1;

        for(int i=0;i<n;i++){

            if(g[u][i] && i!=u){

                if(!visit[i]){
                    if(i!=n-1)cola.push(i);

                    if(level[u]+1<level[i] || level[i]==0){
                        level[i]= level[u]+1;
                    }
                }
            }
        }
    }

    return level[n-1];
}

int main(){

    scanf("%d %ld",&n,&m);
    int u,v;

    for(long i=0;i<m;i++){
        scanf("%d %d",&u,&v);
        t[u-1][v-1]=1;
        t[v-1][u-1]=1;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j){
                b[i][j]= !t[i][j];
            }
        }
    }

     long res1 =bfs(t);
     long res2 = bfs(b);

    if(res1==0 || res2==0){
        printf("-1");
    }else{
        printf("%ld",max(res1,res2) );
    }
    return 0;
}
