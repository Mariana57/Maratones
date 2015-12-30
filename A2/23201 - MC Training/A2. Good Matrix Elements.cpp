#include <bits/stdc++.h>

using namespace std;


int a[102][102];
int main(){

    int n;
    scanf("%d",&n);

    long res=0;
    for(int i=0;i<n;i++){

        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
            res+=a[i][j];
        }
    }

    if(n==3||n==1){
        printf("%ld\n",res);
    }else{


        int m=n/2;

        int i=m-1;
        for(int j=0;j<m;j++){
            res-=a[i][j];
            i--;
        }

        i=0;
        for(int j=m+1;j<n;j++){
            res-=a[i][j];
            i++;
        }

        i=n-1;
       for(int j=m-1;j>=0;j--){
            res-=a[i][j];
            i--;
        }
        i=n-1;
         for(int j=m+1;j<n;j++){
            res-=a[i][j];
            i--;
        }

        printf("%ld\n",res);
    }

    return 0;
}
