#include <bits/stdc++.h>

using namespace std;

vector < int > g[100];
int visit[100];
int level[100];
int main(){

    int caseno=1;
    int t;
    scanf("%d",&t);

    while(t--){


        int n;
        scanf("%d",&n);

        int r;
        scanf("%d",&r);

        while(r--){
            int u,v;
            scanf("%d %d",&u,&v);
            g[u].push_back(v);
        }



    }
    return 0;
}
