#include<stdio.h>
int main(){
    long int N=0;
    while(scanf("%ld",&N)!=EOF){
        long int sum=0;
        for(long int i=1;i<N;i++){
            if(i%2==0&&i%3==0&&i%12!=0){
                sum+=i;
            }
        }
        printf("%ld\n",sum);

    }
    return 0;
}
