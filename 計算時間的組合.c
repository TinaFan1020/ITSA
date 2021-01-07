#include<stdio.h>
int main(){
    long int a=0;
    while(scanf("%ld",&a)!=EOF){
        printf("%ld days\n",a/86400);
        a=a%86400;
        printf("%ld hours\n",a/3600);
        a=a%3600;
        printf("%ld minutes\n",a/60);
        a=a%60;
        printf("%ld seconds\n",a);
    }
    return 0;
}
