#include<stdio.h>
int main(){
    int n=0;
    while(scanf("%d",&n)!=EOF){
        int flag=0;
        for(int i=1;i<=n;i++){
            if(i%5==0&&i%7==0){
                if(flag==1){
                    printf(" ");
                }
                printf("%d",i);
                flag=1;
            }
        }
        printf("\n");
    }
    return 0;
}
