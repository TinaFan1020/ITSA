#include<stdio.h>
int main(){
    long int N=0;
    while(scanf("%ld",&N)!=EOF){
        int flag=0;
        for(int i=1;i<=N;i++){
            if(N%i==0){
                if(flag==1){
                    printf(" ");
                }
                printf("%ld",i);
                flag=1;
            }
        }
        printf("\n");
    }
    return 0;
}
