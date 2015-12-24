#include <bits/stdc++.h>

using namespace std;


int main(){

    int n,p;

    priority_queue<int> pq;
    priority_queue<int, vector<int>, greater<int> > qp;

    map<int, int >mp;
    while(scanf("%d",&n)==1){

        int res=0;
        while(n--){
            scanf("%d",&p);

            pq.push(p);
            mp[p]++;
        }


        int a= mp.end()->first;
        printf("%d",a);
        int mayor= pq.top();
        res+=mayor;
        pq.pop();

        mp[mayor]--;

        if(mp[mayor] ==0){
            mp.erase(mayor);
        }
        mayor= pq.top();
        pq.pop();

        mp[mayor]--;

        if(mp[mayor] ==0){
            mp.erase(mayor);
        }

        if(mp.size()>0){

            int menor= mp.begin()->first;

            res+=menor;
            mp[menor]--;
            if(mp[menor] ==0){
                mp.erase(menor);
            }

            if(mp.size()>0){
                int comenor =mp.begin()->first;
                res+=comenor;


                while(mp.size()>0){
                    mp[menor]++;
                    res+=menor;
                    int mayor= pq.top();
                    res+=mayor;
                    pq.pop();

                    mp[mayor]--;

                    if(mp[mayor] ==0){
                        mp.erase(mayor);
                    }
                    mp[menor]--;
                    if(mp[menor] ==0){
                        mp.erase(menor);
                    }
                }
            }
        }


        printf("%d",res);
    }

    return 0;
}
