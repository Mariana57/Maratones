#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    scanf("%d",&n);

    int m=n/2;

    int xa[m];
    int ya[m];

    int xb[n-m];
    int yb[n-m];

    map< pair<int,int>, long long> mp;

    for(int i=0;i<m;i++){
            scanf("%d %d",&xa[i],&ya[i]);
    }

    for(int i=0;i<n-m;i++){
            scanf("%d %d",&xb[i],&yb[i]);
    }


    long s= (1<<m);

    for(long i=0; i<s ;i++){
        int aux=0;
        int auy=0;

        for(int j=0;j<m;j++){
            if( (i&(1<<j))!=0){
                    aux+=xa[j];
                    auy+=ya[j];
            }
        }
        mp[ make_pair(aux,auy) ]++;

    }

    s= (1<< (n-m) );
    long long res=0;
    for(long i=0; i<s; i++){

        int aux=0;
        int auy=0;

        for(int j=0;j<n-m;j++)
        {
            if( (i&(1<<j))!=0){
                    aux+=xb[j];
                    auy+=yb[j];
            }
        }

        aux*=-1;
        auy*=-1;

        map<pair<int,int> ,long long>::iterator it = mp.find(make_pair(aux, auy));

       if ( it != mp.end() ){
                long  long r = mp[make_pair(aux, auy)];
                res+=r;
        }
    }
    res--;
    printf("%lld\n", res);

    return 0;
}
