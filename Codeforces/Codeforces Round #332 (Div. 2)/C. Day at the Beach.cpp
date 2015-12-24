#include <bits/stdc++.h>

using namespace std;

int main(){

    long n;
    scanf("%ld",&n);

    long a [n],setsMax[n],setsMin[n];

    for(long i=0;i<n;i++){
        scanf("%ld",&a[i]);
    }

    long res=1;
    long aux=a[0];
    setsMax[0]=aux;
    for(long i=1;i<n;i++){

        if(aux<=a[i]){
            aux=a[i];
            setsMax[i]=aux;
        }else{
            setsMax[i]=aux;
        }
    }

    aux=a[n-1];
    setsMin[n-1]=aux;
    for(long i=n-2;i>=0;i--){

        if(a[i]<=aux){
            aux=a[i];
            setsMin[i]=aux;
        }else{
            setsMin[i]=aux;
        }
    }

    for(int i=0;i<n-1;i++){
        if(setsMax[i]<=setsMin[i+1]){
            res++;
        }
    }

    printf("%ld",res);
    return 0;
}
