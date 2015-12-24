#include <bits/stdc++.h>

using namespace std;

int main(){

   long s,d;

   while( scanf("%ld %ld",&s,&d )==2){

        int r=s;
        while(true){
            if(s>=d){
                break;
            }
            s+=r+1;
            r++;
        }
        printf("%ld\n",r);
   }

    return 0;
}
