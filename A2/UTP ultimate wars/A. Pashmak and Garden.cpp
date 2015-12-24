#include <bits/stdc++.h>

using namespace std;

int main(){

    int x1,y1,x2,y2;

    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    double m;

    if(x2-x1==0){
        m=0;
    }else{
          m = (double)(y2-y1)/(double)(x2-x1);
    }


    if( m ==1.0 || m==-1.0 || m==0.0){

        int x3,x4,y3,y4;

        if(m==1.0){

             x3= max(x1,x2);
             y3= min(y2,y1);

             y4= max(y2,y1);
            x4=min(x1,x2);
        }
        if(m==-1.0){

             x3= min(x1,x2);
             y3= min(y2,y1);

             y4= max(y2,y1);
             x4= max(x1,x2);
        }

        if(m==0.0){

            if(x1==x2){
                int d= max(y1,y2)-min(y1,y2);

                 y3= y1;
                 x3=x1+d;

                y4=y2;
                x4=x1+d;
            }

            if(y1==y2){
                int d= max(x1,x2)-min(x1,x2);

                x3= x1;
                y3=y1+d;

                x4=x2;
                y4=y1+d;
            }
        }

        printf("%d %d %d %d",x3,y3,x4,y4);
    }else{
        printf("-1");
    }

    return 0;
}
