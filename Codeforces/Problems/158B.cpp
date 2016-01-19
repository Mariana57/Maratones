#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,s,res=0,aux;
    int a[3]={0,0,0};
    scanf("%d",&n);

    while(n--){
        scanf("%d",&s);
        if(s!=4){
            a[s-1]++;
        }
        else{
            res++;
        }
    }

    if(a[0]>a[2]){
        aux= a[2];
        res +=aux;
        a[0]-=aux;
        a[2]-=aux;

        res+= a[1]/2;
        int div = a[1]%2;

        if(div){
            res++;
            a[0]-=2;
        }
        if(a[0]>0){
            if(a[0]%4==0){
                res+=a[0]/4;
            }else{
               res+=a[0]/4;
               res++;
            }
        }
    }else{
        aux= a[0];
        res +=aux;
        a[0]-=aux;
        a[2]-=aux;

        res+= a[2];

        if(a[1]%2==0){
                res+=a[1]/2;
        }else{
            res+=a[1]/2;
            res++;
        }

    }
    printf("%d",res);


    return 0;
}
