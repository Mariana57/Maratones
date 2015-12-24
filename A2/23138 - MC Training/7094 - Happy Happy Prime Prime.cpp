#include <bits/stdc++.h>

using namespace std;

bool m[10000];
void criba(int tam){
    m[0] = false;
    m[1] = false;
    for(int i = 2; i <= tam; ++i)
        m[i] = true;

    for(int i = 2; i*i <= tam; ++i) {
        if(m[i]) {
            for(int h = 2; i*h <= tam; ++h)
                m[i*h] = false;
        }
    }
}

int main(){

    criba(10000);
    int p,c,t;
    map<int, int> mp;

    mp[4]++;
    mp[16]++;
    mp[37]++;
    mp[58]++;
    mp[89]++;
    mp[145]++;
    mp[42]++;
    mp[20]++;
    scanf("%d",&p);

    while(p--){
        scanf("%d %d",&c,&t);

        if(m[t]){

            int aux=t;
            bool a=1;
            while(aux!=1){

                int res=0;
                while(aux>0){
                    res+= (aux%10)*(aux%10);
                    aux/=10;
                }
                if(mp[res]){
                    a=0;
                    break;
                }

                aux=res;
            }

            if(a){
                printf("%d %d YES\n",c,t);
            }else{
                printf("%d %d NO\n",c,t);
            }
        }else{
            printf("%d %d NO\n",c,t);
        }


    }
    return 0;
}
