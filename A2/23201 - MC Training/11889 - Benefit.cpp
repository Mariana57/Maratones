#include <bits/stdc++.h>

using namespace std;

long gcd(long a, long b)
{
    for (;;)
    {
        if (a == 0) return b;
        b %= a;
        if (b == 0) return a;
        a %= b;
    }
}

int main(){

    long t;
    scanf("%ld",&t);
    long a,c;
    while(t--){

        scanf("%ld %ld",&a,&c);

        if(c%a){
           printf("\n");
        }
        else{
            int i=a;
            while(true){

                long r=(i)/(gcd(a,i));
                if(i== (c/a)){
                    break;
                }
                i++;
            }
            printf("%ld\n",&i);
        }
    }

    return 0;
}
