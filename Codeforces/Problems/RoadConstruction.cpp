#include <bits/stdc++.h>

using namespace std;


int main(){

    int n,m;
    scanf("%d %d",&n,&m);

    bool ar[n+1];
    memset(ar,0,n+1);
    while(m--){
        int a,b;
        scanf("%d %d",&a,&b);

        ar[a]=1;
        ar[b]=1;
    }

    int ad=1;
    for(int i=1;i<n+1;i++){
        if(!ar[i]){
            ad=i;
            break;
        }
    }

    printf("%d\n",n-1);

    for(int i=1;i<n+1;i++){
        if(i!=ad){
            printf("%d %d\n",i,ad);
        }
    }

    return 0;
}
