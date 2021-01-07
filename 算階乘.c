#include<stdio.h>
int main(){
    unsigned long int ans=0;
    while(scanf("%ld",&ans)!=EOF){
        unsigned long int tmp=1;
        while(ans>=1){
            tmp=tmp*ans;
            ans--;
        }
        printf("%ld\n",tmp);
    }
    return 0;
}
