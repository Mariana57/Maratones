#include <bits/stdc++.h>

using namespace std;

int main(){

    long int d1,d2,d3;

    priority_queue<long int,vector<long int>, greater<long int> >pq;
    scanf("%ld %ld %ld",&d1,&d2,&d3);

    long  int res1= d1+d1 + d2 +d2;
    long  int res2= d1+d1+d3+d3;
    long  int res3= d2+d2+d3+d3;
    long  int res4=d1+d2+d3;

    pq.push(res1);
    pq.push(res2);
    pq.push(res3);
    pq.push(res4);

    long int res = pq.top();
    printf("%ld",res);



    return 0;
}
