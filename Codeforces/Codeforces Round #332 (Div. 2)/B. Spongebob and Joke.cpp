
#include <bits/stdc++.h>

using namespace std;

int main(){
    long n,m;

    scanf("%ld %ld",&n,&m);
    long res[m];

    map <long,long> cantidades;
    map <long,long>pos;
    long aux;

    for(long i=0;i<n;i++){
        scanf("%ld",&aux);

        cantidades[aux]++;
        pos[aux]=i+1;
    }

    int bol=1;
    for(long i=0;i<m;i++){
        scanf("%ld",&aux);

        if(cantidades[aux]==0){
            bol=0;
        }
        if(cantidades[aux]>1 && bol!=0){
            bol=2;
        }
        if(cantidades[aux]==1){
            res[i]=pos[aux];
        }
    }

    if(bol==1){
        printf("Possible\n");
        for(long i=0;i<m;i++){
             printf("%ld ",res[i]);
        }
    }else if(bol==2){
        printf("Ambiguity");
    }else{
        printf("Impossible");
    }


    return 0;
}
