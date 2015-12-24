#include <bits/stdc++.h>

using namespace std;


int main(){

    long n;
    scanf("%ld",&n);
    long long k;
    cin>>k;

    long a[n];
    map<long, long>mp;

    for(long i=0;i<n;i++){
        scanf("%ld",&a[i]);
        mp[ a[i] ]++;
    }

    sort(a,a+n);

    long x,y;
    if(k<=n){

        x=a[0];
        y=a[k-1];
    }else if(k%n==0){
        k/=n;
        x=a[k-1];
        y=a[n-1];
    } else{
        long d=k/n;
        x=a[d];
        y=a[(k- (n*d) )-1];
    }

    printf("%ld %ld",x,y);
    return 0;
}
