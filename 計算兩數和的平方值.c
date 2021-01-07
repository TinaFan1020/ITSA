#include<stdio.h>
int main(){
    long int a=0,b=0;
    while(scanf("%ld %ld",&a,&b)!=EOF){
        printf("%ld\n",(a+b)*(a+b));
    }
    return 0;
}
