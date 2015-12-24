#include <bits/stdc++.h>

using namespace std;

int main(){

    long n;
    scanf("%ld",&n);

    long a[n];

    for(long i=0;i<n;i++){
        scanf("%ld",&a[i]);
    }

    priority_queue<long>pq;

    long b[n];
    for(long i=0;i<n-1;i++){

        long maxi=a[i];
        long mini=a[i];
        long j=i+1;
        for(;j<n;j++){

            if(maxi<a[j]){
                maxi=a[j];
            }
            if(mini>a[j]){
                mini=a[j];
            }
            if(maxi-mini>1){
                break;
            }
        }
        pq.push(j-i);

        if(pq.top()==n-i){
            break;
        }
    }

    long res=pq.top();

    printf("%ld",res);
    return 0;
}
