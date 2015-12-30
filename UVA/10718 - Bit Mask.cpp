#include <bits/stdc++.h>

using namespace std;


int main (){

    long n,l,u;

    while(scanf("%ld %ld %ld",&n,&l,&u)==3){

        long aux=0;
        long aux3=0;
        for(long i=l;i<=u;i++){

            long aux2=n;

            for(int j=0;j<32;j++){
                if( (i&(1<<j) )!=0 ){
                    aux2|=(1<<j);
                }
            }

            if(aux2>aux){
                aux=aux2;
                aux3=i;
            }
        }
        printf("%ld\n",aux3);
    }

    return 0;
}
