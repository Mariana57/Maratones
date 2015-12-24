#include <bits/stdc++.h>

using namespace std;


long long powI(int b,int e){

    long long res=1;
    for(long i=0;i<e;i++){
        res*=b;
    }
    return res;
}
int main(){

    long long res1=0,res2=0;

    int x,b1,dx;
    scanf("%d %d",&x,&b1);

    x--;

    while(x>=0){
        scanf("%d",&dx);
        long long p = powI(b1,x);
        res1+= (p*dx);
        x--;
    }

    int y,b2,dy;
    scanf("%d %d",&y,&b2);

    y--;

    while(y>=0){
        scanf("%d",&dy);
        long long p = powI(b2,y);
        res2+= (p*dy);
        y--;
    }

    if(res1<res2){
        printf("<");
    }else if(res1>res2){
        printf(">");
    }
    else{
        printf("=");
    }
    return 0;
}
