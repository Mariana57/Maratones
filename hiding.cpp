#include <cstdio>
#include <map>
using namespace std;

int main() {
    int n;
    scanf("%d",&n);
    int d[n];
    int e[n];
    map<int, int> mp;

    for(int i = 0; i < n; i++){
        scanf("%d",&d[i]);
    }

    int r = 0;

    int suma = 0;
    mp[0] = 1;

    for(int i = 0; i < n; i++){
        suma += d[i];

        if(mp.find(suma) != mp.end()){
            r += mp[suma]++;
        }
        else{
            mp[suma] = 1;
        }
    }
    printf("%d",r);

	return 0;
}
