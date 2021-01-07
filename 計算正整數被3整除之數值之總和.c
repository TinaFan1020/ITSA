#include<stdio.h>
int main(){
    long int a=0,sum=0;
    while(scanf("%ld",&a)!=EOF){
        for(int i=1;i<=a;i++){
            if(i%3==0){
                sum+=i;
            }
        }
        printf("%ld\n",sum);
    }
    return 0;
}
