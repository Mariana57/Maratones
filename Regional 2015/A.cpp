#include <bits/stdc++.h>

using namespace std;

char u[20];
int main(){

    while(scanf("%s",&u)==1){

        int d[10];
        memset(d,0,sizeof d);

        int n = strlen(u);
        int i=0;
        bool t=true;

        for(;i<n;i++){
            int di= u[i]-48;
            d[di]++;
            if(d[di]>2){
                t=false;
                break;
            }
        }

        if(t){
            printf("%s\n",u);
        }else{
            int ui=0;

            while(i>=0){

                int ui=u[i]-48;
                d[ui]--;
                bool b=false;

                while(ui>0){
                    ui--;
                    if(d[ui]<2){
                        b=true;
                        u[i]=ui+48;
                        d[ui]++;
                        break;
                    }
                }

                if(b)
                    break;
                else
                  i--;
            }
            i++;
            for(;i<n;i++){

                for(int j=9;j>=0;j--){
                    if(d[j]<2){
                        u[i]=j+48;
                        d[j]++;
                        break;
                    }
                }
            }

            if(u[0]-48==0){
                 string str="";
                 for(int j=1;j<n;j++){
                    str+=u[j];
                 }
                 cout<<str<<"\n";
            }else{
                 string str(u);
                 cout<<str<<"\n";
            }
        }

    }
    return 0;
}
