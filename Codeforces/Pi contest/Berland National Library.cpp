#include <bits/stdc++.h>

using namespace std;
int main(){
    long n,m;

    scanf("%ld %ld",&n,&m);
    long f[n];
    long res[m];
    map <long,int> cantidades;
    map <long,int>pos;
    long aux;

    for(int i=0;i<n;i++){
        scanf("%ld",&aux);
        cantidades[aux]++;
        pos[aux]=i+1;
    }

    int bol=1;
    for(int i=0;i<m;i++){
        scanf("%ld",&aux);

        if(cantidades[aux]==0){
            bol=0;
            break;
        }
        if(cantidades[aux]>1){
            bol=2;
            break;
        }
        if(cantidades[aux]==1){
            res[0]=pos[aux];
        }
    }

    if(bol){
        printf("Possible\n");
        for(int i=0;i<m;i++){
             printf("%ld ",res[i]+1);
        }
    }else if(bol==2){
        printf("Ambiguity");
    }else{
        printf("Impossible");
    }


    return 0;
}

