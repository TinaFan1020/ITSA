#include<stdio.h>
int main(){
    long int a=0;
    while(scanf("%ld",&a)!=EOF){
        printf("%ld %ld %ld\n",a,a*a,a*a*a);
    }
    return 0;
}
