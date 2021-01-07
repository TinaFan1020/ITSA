#include<stdio.h>
int main(){
    long int a=0,b=0;
    while(scanf("%ld %ld",&a,&b)!=EOF){
        if(a>b){
            long int tmp=0;
            tmp=a;
            a=b;
            b=tmp;
        }
        long int max=1;
        for(int i=2;i<=b/2;i++){
            if(a%i==0&&b%i==0){
                if(max<i){
                    max=i;
                }
            }
        }
        printf("%ld\n",max);
    }
    return 0;
}
